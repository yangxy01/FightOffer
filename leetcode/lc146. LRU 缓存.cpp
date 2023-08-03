struct Node{
    Node* left=nullptr;
    Node* right=nullptr;
    int key;
    int value;
    Node(int _k, int _v):key(_k), value(_v){}
};

class LRUCache {
    Node* head = nullptr;
    Node* tail = nullptr;
    int cap;
    unordered_map<int, Node*> hash;
public:
    LRUCache(int capacity) {
        cap=capacity;
        head=new Node(0, 0);
        tail=new Node(0, 0);
        head->right = tail;
        tail->left = head;
    }

    void insert(Node* p)
    {
        p->right = head->right;
        p->left = head;
        head->right->left = p;
        head->right = p;
    }

    void remove(Node* p)
    {
        p->left->right=p->right;
        p->right->left=p->left;
    }
    
    int get(int key) {
        if(hash.count(key)==1)
        {
            auto p = hash[key];
            remove(p);
            insert(p);
            return p->value;
        }
        else
        {
            return -1;
        }
    }
    
    void put(int key, int value) {
        if(hash.count(key))
        {
            auto p = hash[key];
            p->value = value;
            remove(p);
            insert(p);
        }
        else
        {
            auto p = new Node(key, value);
            insert(p);
            hash[key]=p;
            if(hash.size()>cap)
            {
                auto p=tail->left;
                remove(p);
                hash.erase(p->key);
                delete p;       
            }
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */

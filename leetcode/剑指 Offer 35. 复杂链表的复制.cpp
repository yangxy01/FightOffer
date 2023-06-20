/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/
class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head) return nullptr;
        unordered_map<Node*, Node*> um;
        Node* cur = head;
        while(cur)
        {
            Node* tmp = new Node(cur->val);
            um[cur]=tmp;
            cur=cur->next;
        }
        cur = head;
        while(cur)
        {
            Node* tmp = um[cur];
            tmp->next = um[cur->next];
            tmp->random = um[cur->random];
            cur=cur->next;
        }
        return um[head];
    }
};

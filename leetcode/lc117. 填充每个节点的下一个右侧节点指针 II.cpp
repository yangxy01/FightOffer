/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root) return root;
        queue<Node*> que;
        que.push(root);
        while(que.size())
        {
            int n = que.size();
            Node* prev = nullptr;
            while(n--)
            {
                auto cur = que.front();
                que.pop();
                cur->next=prev;
                prev=cur;
                if(cur->right)   que.push(cur->right);
                if(cur->left)   que.push(cur->left);
            }
        }
        return root;
    }
};

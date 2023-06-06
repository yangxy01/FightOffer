/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> res;
        if(!root) return res;
        queue<Node*> que;
        que.push(root);
        while(que.size())
        {
            int n = que.size();
            vector<int> tmp;
            while(n--)
            {
                auto cur=que.front();
                que.pop();
                tmp.push_back(cur->val);
                for(auto& x:cur->children)
                    if(x)
                        que.push(x);
            }
            res.push_back(tmp);
        }
        return res;
    }
};

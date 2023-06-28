/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(!root) return res;
        queue<TreeNode*> q;
        stack<TreeNode*> st;
        q.push(root);
        int flag=1;
        while(q.size())
        {
            vector<int> vec;
            int n=q.size();
            while(n--)
            {
                auto cur=q.front();
                q.pop();
                vec.push_back(cur->val);
                if(flag==1)
                {
                    if(cur->left)
                        st.push(cur->left);
                    if(cur->right)
                        st.push(cur->right);
                }
                else
                {
                    if(cur->right)
                        st.push(cur->right);
                    if(cur->left)
                        st.push(cur->left);
                }
            }
            while(st.size())
            {
                q.push(st.top());
                st.pop();
            }
            res.push_back(vec);
            flag*=-1;
        }
        return res;
    }
};

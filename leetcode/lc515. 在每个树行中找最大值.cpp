/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int> res;
        if(!root) return res;
        queue<TreeNode*> que;
        que.push(root);
        while(que.size())
        {
            int n=que.size();
            int m=n;
            int maxv=INT_MIN;
            while(n--)
            {
                auto cur=que.front();
                if(n==m-1)
                    maxv=cur->val;
                else
                    maxv=max(maxv, cur->val);
                que.pop();
                if(cur->left) que.push(cur->left);
                if(cur->right) que.push(cur->right);
            }
            res.push_back(maxv);
        }
        return res;
    }
};

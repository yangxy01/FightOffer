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
    int minDepth(TreeNode* root) {
        if(!root) return 0;
        queue<TreeNode*> que;
        que.push(root);
        int depth=0;
        while(que.size())
        {
            depth++;
            int n=que.size();
            while(n--)
            {
                auto cur=que.front();
                que.pop();
                if(!cur->left&&!cur->right)
                    return depth;
                if(cur->left) que.push(cur->left);
                if(cur->right) que.push(cur->right);
            }
        }
        return depth;

        // if(!root)return 0;
        // if(!root->left) return minDepth(root->right)+1;
        // if(!root->right) return minDepth(root->left)+1;
        // return min(minDepth(root->right),minDepth(root->left))+1;
    }
};

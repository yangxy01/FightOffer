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
    void dfs(TreeNode* prev, TreeNode* root, int& res)
    {
        if(!root) return;
        if(!root->left&&!root->right&&prev->left==root)
        {
            res+=root->val;
            return;
        }
        dfs(root, root->left, res);
        dfs(root, root->right, res);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root) return 0;
        int res = 0;
        dfs(root, root->left, res);
        dfs(root, root->right, res);
        return res;
    }
};

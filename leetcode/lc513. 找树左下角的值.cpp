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
    void dfs(TreeNode* root, int& res, int depth, int& maxDepth)
    {
        if(!root) return;
        depth++;
        if(!root->left&&!root->right&&depth>maxDepth)
        {
            res=root->val;
            maxDepth=depth;
        }
        dfs(root->left, res, depth, maxDepth);
        dfs(root->right, res, depth, maxDepth);
    }
    int findBottomLeftValue(TreeNode* root) {
        int maxDepth=1;
        int depth=1;
        int res = 0;
        dfs(root, res, depth, maxDepth);
        return res;
    }
};

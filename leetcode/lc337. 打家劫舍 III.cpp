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
    vector<int> dfs(TreeNode* root)
    {
        if(!root) return {0,0};
        auto l = dfs(root->left);
        auto r = dfs(root->right);
        vector<int> res(2);
        res[0] = max(l[0],l[1])+max(r[0],r[1]);
        res[1] = root->val+l[0]+r[0];
        return res;
    }
public:
    int rob(TreeNode* root) {
        auto v = dfs(root);
        return max(v[0], v[1]);
    }
};

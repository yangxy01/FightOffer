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
    vector<int> v;
    void dfs(TreeNode* root)
    {
        if(!root) return;
        if(root->left)
            dfs(root->left);
        v.push_back(root->val);
        if(root->right)
            dfs(root->right);
    }
    int kthLargest(TreeNode* root, int k) {
        dfs(root);
        return v[v.size()-k];
    }
};

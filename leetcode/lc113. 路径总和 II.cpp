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
    void dfs(TreeNode* root, vector<int> vec, int targetSum, vector<vector<int>>& res)
    {
        targetSum-=root->val;
        vec.push_back(root->val);
        if(!root->left&&!root->right)
        {
            if(targetSum==0)
                res.push_back(vec);
            return;
        }
        if(root->left)
            dfs(root->left, vec, targetSum, res);
        if(root->right)
            dfs(root->right, vec, targetSum, res);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> res;
        if(!root) return res;
        vector<int> vec;
        dfs(root, vec, targetSum, res);
        return res;
    }
};

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
    void InOrder(TreeNode* cur, vector<int>& res)
    {
        if(!cur) return; 
        InOrder(cur->left, res);
        res.push_back(cur->val);
        InOrder(cur->right, res);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        InOrder(root, res);
        return res;
    }
};

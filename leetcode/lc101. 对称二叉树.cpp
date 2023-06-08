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
    bool isSymmetric(TreeNode* left, TreeNode* right)
    {
        if(!left&&!right)
            return true;
        else if(!left&&right)
            return false;
        else if(left&&!right)
            return false;
        if(left->val!=right->val)
            return false;
        bool out = isSymmetric(left->left, right->right);
        bool in = isSymmetric(left->right, right->left);
        return out&&in;
    }
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return isSymmetric(root->left, root->right);
    }
};

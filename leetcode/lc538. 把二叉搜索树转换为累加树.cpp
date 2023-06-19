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
int acc = 0;
class Solution {
public:
    void BST(TreeNode* root)
    {
        if(!root) return;
        BST(root->right);
        root->val += acc;
        acc = root->val;
        BST(root->left);
    }
    TreeNode* convertBST(TreeNode* root) {
        acc = 0;
        if(!root) return nullptr;
        BST(root);
        return root;
    }
};

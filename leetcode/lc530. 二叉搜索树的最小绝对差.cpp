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
    int res = INT_MAX;
    TreeNode* prev = nullptr;
    void InOrder(TreeNode* root)
    {
        if(root==nullptr) return;
        InOrder(root->left);
        if(prev==nullptr)
        {
            prev=root;
        }
        else
        {
            res=min(res, abs(prev->val-root->val));
            prev=root;
        }
        InOrder(root->right);
    }
    int getMinimumDifference(TreeNode* root) {
        InOrder(root);
        return res;
    }
};

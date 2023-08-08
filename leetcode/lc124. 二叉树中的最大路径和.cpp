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
    int res = INT_MIN;
    int maxGain(TreeNode* root)
    {
        if(root==nullptr) return 0;
        int left = max(maxGain(root->left), 0);
        int right = max(maxGain(root->right), 0);
        int acc = left + right + root->val;
        res=max(res, acc);
        // cout<<root->val<<" "<<acc<<endl;
        return root->val + max(left, right);
    }
public:
    int maxPathSum(TreeNode* root) {
        maxGain(root);
        return res;
    }
};

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
 bool flag=true;
class Solution {
    int getHeight(TreeNode* root)
    {
        if(!root||flag==false) return 0;
        int l=getHeight(root->left);
        int r=getHeight(root->right);
        if(abs(l-r)>1)
            flag=false;
        return max(l,r)+1;
    }
public:
    bool isBalanced(TreeNode* root) {
        flag=true;
        if(!root) return true;
        if(abs(getHeight(root->left)-getHeight(root->right))>1||flag==false)
            return false;
        return true;
    }
};

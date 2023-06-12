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
    TreeNode* foo(int ll, int lr, int rl, int rr, vector<int>& preorder, vector<int>& inorder)
    {
        if(ll>lr) return nullptr;
        int val = preorder[ll];
        TreeNode* root = new TreeNode(val);
        int i=rl;
        while(i<=rr)
        {
            if(inorder[i]==val)
                break;
            i++;
        }
        root->left=foo(ll+1, i-rl+ll, rl, i-1, preorder, inorder);
        root->right=foo(i-rl+ll+1, lr, i+1, rr, preorder, inorder);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.size()==0)
            return nullptr;
        TreeNode* root = foo(0, preorder.size()-1, 0, inorder.size()-1, preorder, inorder);
        return root;
    }
};

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
    TreeNode* doo(int ll,int lr,int rl,int rr,vector<int>& inorder, vector<int>& postorder)
    {
        if(ll>lr) return nullptr;
        int val = postorder[rr];
        TreeNode* root= new TreeNode(val);
        int i=ll;
        while(i<=lr)
        {
            if(inorder[i]==val)
                break;
            i++;
        }
        root->left=doo(ll,i-1,rl,rl+i-ll-1,inorder, postorder);
        root->right=doo(i+1,lr,rl+i-ll,rr-1,inorder, postorder);
        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(inorder.size()==0) return nullptr;
        TreeNode* root= doo(0,inorder.size()-1,0,postorder.size()-1,inorder, postorder);
        return root;
    }
};

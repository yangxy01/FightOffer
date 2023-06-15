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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums, int l, int r)
    {
        if(l>r) return nullptr;
        int i=l;
        int maxv=INT_MIN;
        int max_i=l;
        while(i<=r)
        {
            if(nums[i]>maxv)
            {
                maxv=nums[i];
                max_i=i;
            }
            i++;
        }
        TreeNode* root=new TreeNode(maxv);
        root->left=constructMaximumBinaryTree(nums, l, max_i-1);
        root->right=constructMaximumBinaryTree(nums, max_i+1, r);
        return root;
    }

    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if(nums.size()==0) return nullptr;
        int i=0,sz=nums.size();
        int maxv=INT_MIN;
        int max_i=0;
        while(i<sz)
        {
            if(nums[i]>maxv)
            {
                maxv=nums[i];
                max_i=i;
            }
            i++;
        }
        TreeNode* root=new TreeNode(maxv);
        root->left=constructMaximumBinaryTree(nums, 0, max_i-1);
        root->right=constructMaximumBinaryTree(nums, max_i+1, nums.size()-1);
        return root;
    }
};

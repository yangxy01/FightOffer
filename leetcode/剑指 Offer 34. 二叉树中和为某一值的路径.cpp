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
    void backTrace(TreeNode* root, int target, vector<int>& path, int acc)
    {
        // if(acc>target)
        //     return;
        if(root)
        {
            path.push_back(root->val);
            acc+=root->val;
            cout<<acc<<endl;
            if(root->left==nullptr&&root->right==nullptr)
            {
                if(acc == target)
                    res.push_back(path);
                path.pop_back();
                return;
            }
            backTrace(root->left, target, path, acc);
            backTrace(root->right, target, path, acc);
            acc-=root->val;
            path.pop_back();
        }     
    }
    vector<vector<int>> res;
public:
    vector<vector<int>> pathSum(TreeNode* root, int target) {
        if(!root) return res;
        vector<int> path;
        backTrace(root, target, path, 0);
        return res;
    }
};

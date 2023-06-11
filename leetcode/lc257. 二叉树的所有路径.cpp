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
    void getPath(TreeNode* root, vector<string>& res, string s)
    {
        if(!root) return;
        if(!root->left&&!root->right)
        {
            s+=to_string(root->val);
            res.push_back(s);
            return;
        }
        s+=to_string(root->val);
        s+="->";
        getPath(root->left, res, s);
        getPath(root->right, res, s);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        if(!root) return res;  
        string s;
        getPath(root, res, s);
        return res;  
    }
};

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
    int maxDepth(TreeNode* root) {
        // dfs解法
        if(!root) return 0;
        return max(maxDepth(root->left), maxDepth(root->right))+1;

        // // 层次遍历解法
        // if(!root) return 0;
        // queue<TreeNode*> que;
        // que.push(root);
        // int depth=0;
        // while(que.size())
        // {
        //     int n=que.size();
        //     while(n--)
        //     {
        //         auto cur=que.front();
        //         que.pop();
        //         if(cur->left) que.push(cur->left);
        //         if(cur->right) que.push(cur->right);
        //     }
        //     depth++;
        // }
        // return depth;
    }
};

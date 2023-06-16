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
    vector<int> findMode(TreeNode* root) {
        vector<int> res;
        if(!root) return res;
        unordered_map<int,int> um;
        queue<TreeNode*> que;
        que.push(root);
        while(que.size())
        {
            auto cur=que.front();
            que.pop();
            um[cur->val]++;
            if(cur->left) que.push(cur->left);
            if(cur->right) que.push(cur->right);
        }
        int max_num = 0;
        for(auto& item:um)
        {
            if(item.second>max_num)
                max_num = item.second;
        }
        for(auto& item:um)
        {
            if(item.second==max_num)
                res.push_back(item.first);
        }
        return res;
    }
};

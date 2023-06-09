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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if((!p&&q)||(p&&!q)) return false;
        if(!p&&!q) return true;
        queue<TreeNode*> que;
        que.push(p);
        que.push(q);
        while(que.size())
        {
            auto cur1=que.front();
            que.pop();
            auto cur2=que.front();
            que.pop();
            if(cur1->val!=cur2->val) return false;
            if(cur1->left)
            {
                if(!cur2->left) return false;
                else
                {
                    que.push(cur1->left);
                    que.push(cur2->left);
                }
            }
            else
                if(cur2->left) return false;
            if(cur1->right)
            {
                if(!cur2->right) return false;
                else
                {
                    que.push(cur1->right);
                    que.push(cur2->right);
                }
            }
            else
                if(cur2->right) return false;
        }
        return true;
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        queue<TreeNode*> que;
        que.push(root);
        while(que.size())
        {
            auto cur=que.front();
            que.pop();
            if(cur->val==subRoot->val)
                if(isSameTree(cur, subRoot))
                    return true;
            if(cur&&cur->left) que.push(cur->left);
            if(cur&&cur->right) que.push(cur->right);
        }
        return false;
    }
};

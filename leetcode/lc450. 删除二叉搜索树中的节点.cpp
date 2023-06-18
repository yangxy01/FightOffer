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
    TreeNode* deleteNode(TreeNode* root, int key) {
        // 1. 先找到key节点
        TreeNode* cur = root;
        TreeNode* parent = nullptr;
        while(cur)
        {
            if(key>cur->val)
            {
                parent=cur;
                cur=cur->right;
            }
            else if(key<cur->val)
            {
                parent=cur;
                cur=cur->left;
            }
            else{ // key == cur->val
                if(cur->left==nullptr)
                {
                    if(parent==nullptr)
                    {
                        root = root->right;
                        delete parent;
                        return root;
                    }
                    else
                    {
                        if(cur == parent->left)
                            parent->left = cur->right;
                        else
                            parent->right = cur->right;
                        delete cur;
                    }
                }
                else if(cur->right==nullptr)
                {
                    if(parent==nullptr)
                    {
                        root = root->left;
                        delete parent;
                        return root;
                    }
                    else
                    {
                        if(cur == parent->left)
                            parent->left = cur->left;
                        else
                            parent->right = cur->left;
                        delete cur;
                    }
                }
                else // 删除5节点这种类型
                {
                    auto del = cur->left; // 最右节点
                    TreeNode* prev = cur; // 最右节点的父节点
                    while(del->right)
                    {
                        prev = del;
                        del = del->right;
                    }
                    cur->val = del->val; // 替换法
                    if(del == cur->left) // 判断这个最右节点是不是就是cur->left
                    {
                        cur->left = del->left;
                        delete del;
                    }
                    else
                    {
                        prev->right = del->left;
                        delete del;
                    }
                }
                return root;
            }
        }
        return root;
    }
};

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
        // 1. ���ҵ�key�ڵ�
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
                else // ɾ��5�ڵ���������
                {
                    auto del = cur->left; // ���ҽڵ�
                    TreeNode* prev = cur; // ���ҽڵ�ĸ��ڵ�
                    while(del->right)
                    {
                        prev = del;
                        del = del->right;
                    }
                    cur->val = del->val; // �滻��
                    if(del == cur->left) // �ж�������ҽڵ��ǲ��Ǿ���cur->left
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

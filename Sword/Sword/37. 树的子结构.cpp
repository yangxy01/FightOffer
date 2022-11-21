//#include<iostream>
//#include<string>
//#include<vector>
//#include<map>
//#include<queue>
//#include<utility>
//
//using namespace std;
//
//
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
// 
//class Solution {
//public:
//    bool hasSubtree(TreeNode* pRoot1, TreeNode* pRoot2) {
//        if (pRoot2 == nullptr || pRoot1 == nullptr)
//            return false;
//        queue<TreeNode*> que1;
//        que1.push(pRoot1);
//        while (que1.size())
//        {
//            TreeNode* cur1 = que1.front();
//            que1.pop();
//            if (match(cur1, pRoot2))return true;
//            if (cur1->left)
//                que1.push(cur1->left);
//            if (cur1->right)
//                que1.push(cur1->right);
//        }
//        return false;
//    }
//
//    bool match(TreeNode* cur1, TreeNode* cur2)
//    {
//        queue<TreeNode*> que1, que2;
//        que1.push(cur1);
//        que2.push(cur2);
//        while (que1.size() && que2.size())
//        {
//            cur1 = que1.front();
//            que1.pop();
//            cur1 = que2.front();
//            que2.pop();
//            if (cur1->val != cur2->val)
//                return false;
//            if (cur1->left)
//            {
//                if (cur2->left)
//                {
//                    que1.push(cur1->left);
//                    que2.push(cur2->left);
//                }
//                else
//                    return false;
//            }
//            if (cur1->right)
//            {
//                if (cur2->right)
//                {
//                    que1.push(cur1->right);
//                    que2.push(cur2->right);
//                }
//                else
//                    return false;
//            }
//        }
//        return true;
//    }
//};
//int main()
//{
//    Solution S;
//    
//}
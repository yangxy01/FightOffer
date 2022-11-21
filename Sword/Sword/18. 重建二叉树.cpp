//#include<iostream>
//#include<vector>
//#include<map>
//
//using namespace std;
//
// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// };
//
//class Solution {
//public:
//    vector<int> pre, mid;
//    map<int, int> hash;
//    TreeNode* recur(int pre_l, int pre_r, int mid_l, int mid_r)
//    {
//        if (pre_l > pre_r)
//            return nullptr;
//        int root = pre[pre_l];//¸ù½Úµã
//        int pos = hash[root];
//        TreeNode* p = new TreeNode(root);
//        p->left = recur(pre_l + 1, pre_l + pos - mid_l, mid_l, pos - 1);
//        p->right = recur(pre_l + pos - mid_l + 1, pre_r, pos + 1, mid_r);
//        return p;
//    }
//    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder)
//    {
//        pre = preorder;
//        mid = inorder;
//        for (int i = 0; i < inorder.size(); i++)
//            hash[inorder[i]] = i;
//        TreeNode* p = recur(0, preorder.size() - 1, 0, inorder.size() - 1);
//        return p;
//    }
//};
//
//int main()
//{
//    Solution S;
//    vector<int> preorder, inorder;
//    preorder.push_back(3);
//    preorder.push_back(9);
//    preorder.push_back(20);
//    preorder.push_back(15);
//    preorder.push_back(7);
//    inorder.push_back(9);
//    inorder.push_back(3);
//    inorder.push_back(15);
//    inorder.push_back(20);
//    inorder.push_back(7);
//    TreeNode* p = S.buildTree(preorder, inorder);
//}
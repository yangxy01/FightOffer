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
//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode(int x) : val(x), next(NULL) {}
//};
//
//class Solution {
//public:
//    ListNode* merge(ListNode* l1, ListNode* l2) {
//        ListNode* fake = new ListNode(-1);
//        ListNode* cur = fake;
//        ListNode* p = l1;
//        ListNode* q = l2;
//        while (p && q)
//        {
//            if (p->val < q->val)
//            {
//                cur->next = p;
//                cur = p;
//                p = p->next;
//            }
//            else
//            {
//                cur->next = q;
//                cur = q;
//                q = q->next;
//            }
//        }
//        if (p)cur->next = p;
//        if (q)cur->next = q;
//        return fake->next;
//    }
//};
//
//int main()
//{
//    Solution S;
//    ListNode* l1 = new ListNode(2);
//    ListNode* l2 = new ListNode(4);
//    S.merge(l1, l2);
//}
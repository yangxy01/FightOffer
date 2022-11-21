//#include<iostream>
//#include<vector>
//#include<map>
//#include<queue>
//#include<utility>
//
//using namespace std;
//
//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode(int x) : val(x), next(NULL) {}
//};
// 
//class Solution {
//public:
//    ListNode* deleteDuplication(ListNode* head) {
//        ListNode* fake = new ListNode(-1);
//        fake->next = head;
//        ListNode* p = fake;
//        while (p->next)//相当于q存在
//        {
//            ListNode* q = p->next;//处理q
//            while (q && p->next->val == q->val)
//            {
//                q = q->next;
//            }
//            if (q == p->next->next)//也就是p->next只有一个
//            {
//                p = p->next;
//            }
//            else
//            {
//                p->next = q;
//            }
//        }
//        return fake->next;
//    }
//};
//
//int main()
//{
//    Solution S;
//    ListNode* head = new ListNode(1);
//    ListNode* p1 = new ListNode(2);
//    head->next = p1;
//    ListNode* p2 = new ListNode(3);
//    p1->next = p2;
//    ListNode* p3 = new ListNode(3);
//    p2->next = p3;
//    ListNode* p4 = new ListNode(4);
//    p3->next = p4;
//    ListNode* p5 = new ListNode(4);
//    p4->next = p5;
//    ListNode* p6 = new ListNode(5);
//    p5->next = p6;
//
//    ListNode* p = head;
//    while (p)
//    {
//        cout << p->val << " ";
//        p = p->next;
//    }
//    cout << endl;
//
//    S.deleteDuplication(head);
//
//    p = head;
//    while (p)
//    {
//        cout << p->val << " ";
//        p = p->next;
//    }
//    cout << endl;
//}
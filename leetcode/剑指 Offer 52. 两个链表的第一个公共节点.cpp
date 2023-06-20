/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int count1=0, count2=0;
        ListNode *p1 = headA;
        ListNode *p2 = headB;
        while(p1)
        {
            count1++;
            p1=p1->next;
        }
        while(p2)
        {
            count2++;
            p2=p2->next;
        }
        if(count1>count2)
        {
            int diff = count1-count2;
            while(diff--)
                headA=headA->next;
        }
        else
        {
            int diff = count2-count1;
            while(diff--)
                headB=headB->next;
        }
        while(headA&&headB)
        {
            if(headB==headA)
                return headB;
            headA=headA->next;
            headB=headB->next;
        }
        return nullptr;
    }
};

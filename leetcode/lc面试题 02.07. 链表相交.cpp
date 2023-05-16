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
        ListNode *p1 = headA;
        ListNode *p2 = headB;
        int lenA=0, lenB=0;
        while(p1)
        {
            p1=p1->next;
            lenA++;
        }
        while(p2)
        {
            p2=p2->next;
            lenB++;
        }
        int len=0;
        p1 = headA;
        p2 = headB;
        if(lenA>lenB)
        {
            len=lenA-lenB;
            while(len--)
                p1=p1->next;
        }
        else if(lenB>lenA)
        {
            len=lenB-lenA;
            while(len--)
                p2=p2->next;
        }
        while(p1&&p2)
        {
            if(p1==p2)
                return p1;
            p1=p1->next;
            p2=p2->next;
        }
        return nullptr;
    }
};

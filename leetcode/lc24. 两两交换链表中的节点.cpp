/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head||!head->next)
            return head;
        ListNode* dummy = new ListNode;
        dummy->next=head;
        ListNode* p0 = dummy;
        ListNode* p1=head;
        ListNode* p2=head->next;
        ListNode* p3;
        while(p1&&p2)
        {
            p0->next=p2;
            p1->next=p2->next;
            p2->next=p1;
            p0=p1;
            p1=p1->next;
            if(p1)
                p2=p1->next;
            else
                break;
        }
        return dummy->next;
    }
};

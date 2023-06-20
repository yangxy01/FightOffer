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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode;
        ListNode* cur = dummy;
        ListNode* p1 = l1;
        ListNode* p2 = l2;
        while(p1&&p2)
        {
            if(p1->val<p2->val)
            {
                cur->next = p1;
                cur=cur->next;
                p1=p1->next;
            }
            else
            {
                cur->next = p2;
                cur=cur->next;
                p2=p2->next;
            }
        }
        if(p1)
        {
            cur->next=p1;
        }
        else
            cur->next=p2;
        return dummy->next;
    }
};

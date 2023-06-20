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
    ListNode* deleteNode(ListNode* head, int val) {
        ListNode* dummy = new ListNode;
        dummy->next=head;
        ListNode* prev = dummy;
        ListNode* cur = dummy->next;
        while(cur)
        {
            if(cur->val==val)
            {
                prev->next=cur->next;
                return dummy->next;
            }
            else
            {
                prev=cur;
                cur=cur->next;
            }
        }
        return dummy->next;
    }
};

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
    ListNode* getKthFromEnd(ListNode* head, int k) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast&&k--)
        {
            fast=fast->next;
        }
        while(fast)
        {
            fast=fast->next;
            slow = slow->next;
        }
        return slow;
    }
};

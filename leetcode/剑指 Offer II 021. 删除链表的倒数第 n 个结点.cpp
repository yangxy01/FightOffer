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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head) return head;
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* dummy = new ListNode;
        dummy->next = head;
        ListNode* prev = dummy;
        while(n--)
        {
            fast=fast->next;
        }
        while(fast)
        {
            fast=fast->next;
            prev=slow;
            slow=slow->next;
        }
        prev->next=slow->next;
        delete slow;
        return dummy->next;
    }
};

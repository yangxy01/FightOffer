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
        ListNode* dummy = new ListNode;
        dummy->next=head;
        ListNode* fast=dummy->next;
        ListNode* slow=dummy;
        int m=n;
        while(m--)
        {
            if(fast==nullptr)return dummy->next;
            fast=fast->next;
        }
        while(fast)
        {
            fast=fast->next;
            slow=slow->next;
        }
        ListNode* tmp = slow->next;
        slow->next=slow->next->next;
        delete tmp;
        return dummy->next;
    }
};

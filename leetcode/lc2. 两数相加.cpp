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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* cur1 = l1;
        ListNode* cur2 = l2;
        ListNode* dummy = new ListNode;
        ListNode* prev = dummy;
        int k = 0;
        while(cur1&&cur2)
        {
            int sum = cur1->val + cur2->val + k;
            ListNode* cur = new ListNode(sum%10);
            k = sum/10;
            prev->next = cur;
            prev = cur;
            cur1 = cur1->next;
            cur2 = cur2->next;
        }
        while(cur1)
        {
            int sum = cur1->val + k;
            ListNode* cur = new ListNode(sum%10);
            k = sum/10;
            prev->next = cur;
            prev = cur;
            cur1 = cur1->next;
        }
        while(cur2)
        {
            int sum = cur2->val + k;
            ListNode* cur = new ListNode(sum%10);
            k = sum/10;
            prev->next = cur;
            prev = cur;
            cur2 = cur2->next;
        }
        if(k)
        {
            ListNode* cur = new ListNode(k);
            prev->next = cur;
        }
        return dummy->next;
    }
};

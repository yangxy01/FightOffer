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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head || !head->next) return head;
        ListNode* dummy = new ListNode;
        dummy->next = head;
        ListNode* last = dummy, * prev = dummy, * cur = head, * next = nullptr;
        while (cur) {
            int t = k-1;
            last = cur;
            while (last && t--)
                last = last->next;
            if (last == nullptr) break;
            ListNode* lastTail = prev;
            prev = last->next;
            for (int i = 0; i < k; i++) {
                next = cur->next;
                cur->next = prev;
                prev = cur;
                cur = next;
            }
            prev = lastTail->next;
            lastTail->next = last;
        }
        return dummy->next;
    }
};

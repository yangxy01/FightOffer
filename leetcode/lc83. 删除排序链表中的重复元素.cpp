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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* prev = head, *cur = head;
        while(cur)
        {
            while(cur && cur->val==prev->val)
            {
                ListNode* tmp = cur;
                cur=cur->next;
                if(tmp!=prev) delete tmp;
            }
            prev->next=cur;
            prev=cur;
        }
        return head;
    }
};

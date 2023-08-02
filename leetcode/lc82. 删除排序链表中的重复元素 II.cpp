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
        ListNode* dummy = new ListNode;
        dummy->next = head;
        ListNode* prev = dummy, *start = head, *end = head;
        while(start&&start->next)
        {
            while(end && start->val==end->val)
            {
                ListNode* tmp = start;
                end = end->next;
                if(tmp!=start)
                    delete tmp;
            }
            // cout<<prev->val<<" "<<start->val<<" "<<end->val<<endl;
            if(start->next==end)
            {
                prev=start;
                start=end;
            }
            else
            {
                prev->next = end;
                delete start;
                start=end;
            }
        }
        return dummy->next;
    }
};

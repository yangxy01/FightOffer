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
    vector<int> res;
    void foo(ListNode* cur)
    {
        if(!cur) return;
        foo(cur->next);
        res.push_back(cur->val);
    }
    vector<int> reversePrint(ListNode* head) {
        foo(head);
        return res;
    }
};

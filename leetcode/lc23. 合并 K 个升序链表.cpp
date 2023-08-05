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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode;
        ListNode* p1 = list1, *p2 = list2, *prev = dummy;
        while(p1&&p2)
        {
            if(p1->val<p2->val)
            {
                prev->next = p1;
                p1 = p1->next;
            }
            else
            {
                prev->next = p2;
                p2 = p2->next;
            }
            prev = prev->next;
        }
        if(p1) prev->next = p1;
        if(p2) prev->next = p2;
        return dummy->next;
    }
    ListNode* mergeSort(vector<ListNode*>& lists, int l, int r)
    {
        if(l==r) return lists[l];
        if(l>r) return nullptr;
        int mid = l+r>>1;
        return mergeTwoLists(mergeSort(lists, l, mid), mergeSort(lists, mid+1, r));
    }
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n =lists.size();
        return mergeSort(lists, 0, n-1);
    }
};

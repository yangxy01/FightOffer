#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<queue>
#include<utility>

using namespace std;

/**
 * Definition for singly-linked list with a random pointer.
 * struct ListNode {
 *     int val;
 *     ListNode *next, *random;
 *     ListNode(int x) : val(x), next(NULL), random(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* copyRandomList(ListNode* head) {
        if (!head)return nullptr;
        ListNode* fake = new ListNode(-1);
        ListNode* p1 = head;
        ListNode* p2 = fake;
        while (p1)
        {
            ListNode* tmp = new ListNode(p1->val);
            p2->next = tmp;
            p2 = p2->next;
            p1 = p1->next;
        }
        p1 = head;
        p2 = fake->next;
        // while(p2)
        // {
        //     cout<<p2->val<<" ";
        //     p2=p2->next;
        // }
        // cout<<endl;
        while (p1)
        {
            if (p1->random)
            {
                ListNode* pp1 = head;
                ListNode* pp2 = fake->next;
                while (pp1 != p1->random)
                {
                    pp1 = pp1->next;
                    pp2 = pp2->next;
                }
                p2->random = pp2;
            }
            p1 = p1->next;
            p2 = p2->next;
        }
        return fake->next;
    }
};


int main()
{
    Solution S;

    vector<int> data{ 4, 8, 6, 12, 16, 14, 10 };
    auto ret = S.verifySequenceOfBST(data);
}
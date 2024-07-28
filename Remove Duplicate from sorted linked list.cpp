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
        if(head==nullptr || head->next==nullptr)
        return head;
        ListNode* curr=head;
        ListNode* head_1=curr;
        while(curr->next!=nullptr)
        {
            if(curr->val==curr->next->val)
            {    if(curr->next->next!=nullptr)
                curr->next=curr->next->next;//curr ke next mein seedha usi ke next ka next daaldo
                                           //kyunki uska next to dulpicate hai na
                else
                curr->next=nullptr;
            }
            else
            curr=curr->next;
        }
        return head_1;
        
    }
};

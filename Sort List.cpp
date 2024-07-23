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
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next)
        {
            return head;
        }
       // multiset<int> ans;
       vector<int> ans;
        while(head!=nullptr)
        {   
            ans.push_back(head->val);
            head=head->next;
        }
        sort(begin(ans),end(ans));
        ListNode* head1=new ListNode(0);
        ListNode* curr=head1;
        for(auto number:ans)
        {
            curr->next=new ListNode(number);
            curr=curr->next;
        }
        return head1->next;
    }
};

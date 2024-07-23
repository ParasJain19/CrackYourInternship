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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> ans;
        for(auto& list:lists)
        {
            while(list!=nullptr)
            {
                ans.push_back(list->val);
                list=list->next;
            }
        }
        sort(begin(ans),end(ans));
        ListNode* head1=new ListNode(0);
        ListNode* dummy=head1;
        for(auto num:ans)
        {
            dummy->next=new ListNode(num);
            dummy=dummy->next;
        }
        return head1->next;
    }
};

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
        int count=0;
        vector<int> num;
        while(head!=nullptr)
        {   num.push_back(head->val);
            head=head->next;
            count++;
        }
        int i=0;
        while(i+k<=count)
        {
            reverse(num.begin()+i,num.begin()+i+k);
            i+=k;
        }
        ListNode* dumm=new ListNode(0);
        ListNode* curr=dumm;
        for(int i=0;i<num.size();i++)
        {
            curr->next=new ListNode(num[i]);
            curr=curr->next;
        }
        return dumm->next;
    }
};

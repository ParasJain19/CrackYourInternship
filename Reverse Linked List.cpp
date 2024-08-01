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
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr || head->next==nullptr)
        return head;
        stack<int> st;
        while(head!=nullptr)
        {
            st.push(head->val);
            head=head->next;
        }
        ListNode* curr=new ListNode(0);
        ListNode* dumm=curr;
        while(!st.empty())
        {   int x=st.top();
            dumm->next=new ListNode(x);
            dumm=dumm->next;
            st.pop();
        }
        return curr->next;
    }
};

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        vector<int> numsmall;
        vector<int> numlarge; 
        while(head!=nullptr)
        {
            if(head->val<x)
            {
                numsmall.push_back(head->val);
            }
            else{
                numlarge.push_back(head->val);
            }
            head=head->next;
        }
        ListNode* dumm=new ListNode(0);
        ListNode* curr=dumm;
        for(int i=0;i<numsmall.size();i++)
        {
            curr->next=new ListNode(numsmall[i]);
            curr=curr->next;
        }
        for(int i=0;i<numlarge.size();i++)
        {
            curr->next=new ListNode(numlarge[i]);
            curr=curr->next;
        }
        return dumm->next;
    }
};

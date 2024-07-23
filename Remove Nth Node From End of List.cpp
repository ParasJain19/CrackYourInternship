class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL && n==1)
        return nullptr;
        ListNode* curr=head;
        vector<ListNode*> nodes;
        while(curr!=nullptr)
        {
            nodes.push_back(curr);
            curr=curr->next;
        }
        int i=nodes.size()-n-1;
        if(i<0)
        return nodes[0]->next;
        if(nodes[i]->next->next!=nullptr)
        nodes[i]->next=nodes[i]->next->next;
        else
        nodes[i]->next=nullptr;

        return head;
    }
};

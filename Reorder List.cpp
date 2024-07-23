class Solution {
public:
    void reorderList(ListNode* head) {
        if(head==nullptr || head->next==nullptr)
        {
            return;
        }
        ListNode* curr=head;
        vector<ListNode*> nodes;
        while(curr!=nullptr)
        {
            nodes.push_back(curr);
            curr=curr->next;
        }
        int i=0,j=nodes.size()-1;
        while(i<j)
        {
            nodes[i]->next=nodes[j];
            i++;
            if(i==j) break;
            nodes[j]->next=nodes[i];
            j--;
        }
        nodes[i]->next=nullptr;
    }
};

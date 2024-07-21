class Solution {
public:
    ListNode* middleNode(ListNode* head) {
      vector<int> arr;
      ListNode* head1=head;
      while(head1!=NULL)
      { arr.push_back(head1->val);
        head1=head1->next;
      }
      ListNode* temp=head;
      int j=0;
      while(j<arr.size()/2)
      {
        temp=temp->next;
        j++;
      }
      return temp;
    }
};

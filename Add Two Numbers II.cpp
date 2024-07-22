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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> n1;
        vector<int> n2;
        while(l1!=NULL)
        {
            n1.push_back(l1->val);
            l1=l1->next;
        }
        while(l2!=NULL)
        {
            n2.push_back(l2->val);
            l2=l2->next;
        }
        int carry=0;
        vector<int> sum;
        int i=n1.size()-1,j=n2.size()-1;
        while(i>=0 && j>=0)
        {
            int s=n1[i]+n2[j]+carry;
            if(s>9)
            carry=1;
            else
            carry=0;
            s=s%10;
            sum.push_back(s);
            cout<<s<<" "; 
            i--;
            j--;
        }
        while(i>=0)
        {
            int s=n1[i]+carry;
            if(s>9)
            carry=1;
            else
            carry=0;
            s=s%10;
            sum.push_back(s);
            cout<<s<<" "; 
            i--;
        }
         while(j>=0)
        {
            int s=n2[j]+carry;
            if(s>9)
            carry=1;
            else
            carry=0;
            s=s%10;
            sum.push_back(s);
            cout<<s<<" "; 
            j--;
        }
             if(carry==1)
            {sum.push_back(carry);
            cout<<carry<<" "; 
            }

        ListNode* head=new ListNode(0);
        ListNode* head1=head;
        for(int i=sum.size()-1;i>-1;i--)
        {
            head1->next=new ListNode(sum[i]);
            head1=head1->next;
        }
        return head->next;
    }
};

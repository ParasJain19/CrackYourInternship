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
    int getDecimalValue(ListNode* head) {
        vector<int> digits;
        while(head!=nullptr)
        {
            digits.push_back(head->val);
            head=head->next;
        }
        int digit=0,j=0;
        for(int i=digits.size()-1;i>-1;i--)
        {
            if(digits[i]==1)
            {
                digit+=pow(2,j);
            }
            j++;
        }
        return digit;
    }
};

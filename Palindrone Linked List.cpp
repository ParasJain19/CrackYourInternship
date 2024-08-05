class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head==nullptr)
        return false;
        vector<int> num;
        while(head!=nullptr)
        {
            num.push_back(head->val);
            head=head->next;
        }
        int l=0;
        int r=num.size()-1;
        while(l<=r)
        {
            if(num[l]!=num[r])
            {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};

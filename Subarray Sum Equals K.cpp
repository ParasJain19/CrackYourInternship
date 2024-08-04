class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        for(int i=0;i<nums.size();i++)
        {   long curr_sum=0;
            for(int j=i;j<nums.size();j++)
            {
                curr_sum+=nums[j];
                if(curr_sum==k)
                count++;
            }
        }
        return count;
    }
};

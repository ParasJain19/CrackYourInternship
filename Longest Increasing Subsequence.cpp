class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> t(nums.size(),1);
        int ans=1;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[j]<nums[i])
                {
                    t[i]=max(t[i],t[j]+1);
                    ans=max(t[i],ans);
                }
            }
        }
        return ans;
    }
};

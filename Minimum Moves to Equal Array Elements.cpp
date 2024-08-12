class Solution {
public:
    int minMoves(vector<int>& nums) {
        int min_num=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            min_num=min(min_num,nums[i]);
        }
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            ans+=abs(nums[i]-min_num);
        }
        return ans;
    }
};

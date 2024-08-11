class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(begin(nums),end(nums));
        int mid=nums.size()/2;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=abs(nums[i]-nums[mid]);
        } 
        return sum;
    }
};

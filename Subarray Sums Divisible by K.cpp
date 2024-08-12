class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        int sum=0,count=0;
        map[0]++;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];

            if(map[(sum%k+k)%k]>0)
            {
                count+=map[(sum%k+k)%k];
            }
            map[(sum%k+k)%k]++;
        }
        return count;
    }
};    

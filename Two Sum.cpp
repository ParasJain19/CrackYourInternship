
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        
        int numsSize = nums.size(); 
        
        for (int i = 0; i < numsSize; ++i) {
            for (int j = i + 1; j < numsSize; ++j) {
                if (nums[i] + nums[j] == target) {
                    return {i,j}; 
                }
            }
        }
        
        return {0,0};
    }
};

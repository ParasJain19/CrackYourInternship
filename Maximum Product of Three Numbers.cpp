class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        // Compare the product of the three largest numbers with the product of the two smallest and the largest number
        int max1 = nums[n-1] * nums[n-2] * nums[n-3];
        int max2 = nums[0] * nums[1] * nums[n-1];
        //two negative ==positive
        
        return max(max1, max2);
    }
};

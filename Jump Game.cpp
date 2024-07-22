class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return true; // If there's only one element, we're already at the last index
        int farthest = 0; // Track the farthest index we can reach
        for (int i = 0; i < n; ++i) {
            if (i > farthest) return false; // If we can't reach this index
            farthest = max(farthest, i + nums[i]); // Update the farthest index we can reach
            if (farthest >= n - 1) return true; // If we can reach or pass the last index
        }
        return false;
    }
};

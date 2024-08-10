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

// Approach 2
class Solution {
public:
    vector<int> dp;
    //dp[i] tabhi 1 hoga if it's possible to reach the end from index i, and 0 otherwise.
    bool dfs(vector<int>& nums, int i) {
        if (i >= nums.size() - 1) {
            return true;
        }

        if (dp[i] != -1) {
            return dp[i];
        }

        
        for (int jump = 1; jump <=nums[i]; jump++)//min 1 jump to chahiye ,atmost nums[i]jumps  
        {
            if (dfs(nums, i+jump))//i+ j jumps
             {
                return dp[i] = true;
            }
        }

        return dp[i] = false;
    }

    bool canJump(vector<int>& nums) {
        dp.resize(nums.size(), -1);
        return dfs(nums, 0);
    }
};

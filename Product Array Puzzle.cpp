class Solution {
public:
    vector<long long int> productExceptSelf(vector<long long int>& nums) {
        int n = nums.size();
        long long int mul = 1;
        int zero_count = 0;

        // Calculate the product of all non-zero elements and count the number of zeros
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                mul *= nums[i];
            } else {
                zero_count++;
            }
        }

        vector<long long int> ans(n, 0);

        // If there's more than one zero, the result is already all zeros
        if (zero_count > 1) {
            return ans; // All elements are zero
        }

        // If there's exactly one zero
        if (zero_count == 1) {
            for (int i = 0; i < n; i++) {
                if (nums[i] == 0) {
                    ans[i] = mul;
                    break;
                }
            }
        } else {
            // No zeros, compute the result normally
            for (int i = 0; i < n; i++) {
                ans[i] = mul / nums[i];
            }
        }

        return ans;
    }
};

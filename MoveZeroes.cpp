class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeroCount = 0; 
        stack<int> nonZeroStack;

        for (int i = nums.size()-1; i >=0;i--) {
            if (nums[i] == 0) {
                zeroCount++;
            } else {
                nonZeroStack.push(nums[i]);
            }
        }

        int index = 0;
        while (!nonZeroStack.empty()) {
            nums[index++] = nonZeroStack.top();
            nonZeroStack.pop();
        }

        while (index < nums.size()) {
            nums[index++] = 0;
        }
    }
};

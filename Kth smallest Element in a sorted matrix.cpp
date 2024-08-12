class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> nums;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                nums.push_back(matrix[i][j]);
            }
        }
        sort(begin(nums),end(nums));
        return nums[k-1];
    }
};

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if (matrix.empty()) return {};

        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> ans;

        int left = 0, right = m - 1;
        int top = 0, bottom = n - 1;

        while (left <= right && top <= bottom) {   
            //  left to right
            for (int i = left; i <= right; i++) 
            {
                ans.push_back(matrix[top][i]);
            }
            top++;

            //  top to bottom
            for (int i = top; i <= bottom; i++) 
            {
                ans.push_back(matrix[i][right]);
            }
            right--;

            // Traverse from right to left, if there are rows remaining
            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }

            // Traverse from bottom to top, if there are columns remaining
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
};

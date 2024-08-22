class Solution {
public:
    int n, m;
    vector<vector<int>> dp;

    int dfs(vector<vector<int>>& matrix, int i, int j) {
        if(dp[i][j] != -1) {
            return dp[i][j];
        }
        
        vector<int> row = {0, 0, 1, -1};
        vector<int> col = {1, -1, 0, 0};
        int maxLength = 1;

        for (int k = 0; k < 4; k++) {
            int newRow = i + row[k];
            int newCol = j + col[k];
            
            if(newRow >= 0 && newRow < n && newCol >= 0 && newCol < m && matrix[newRow][newCol] > matrix[i][j]) {
            maxLength = max( maxLength , 1 + dfs(matrix, newRow, newCol) );
            }
        }

        dp[i][j] = maxLength;
        return dp[i][j];
    }

    int longestIncreasingPath(vector<vector<int>>& matrix) {
        n = matrix.size();
        m = matrix[0].size();
        dp = vector<vector<int>>(n, vector<int>(m, -1)); // Initialize the dp table

        int longestPath = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                longestPath = max(longestPath, dfs(matrix, i, j));
            }
        }

        return longestPath;
    }
};

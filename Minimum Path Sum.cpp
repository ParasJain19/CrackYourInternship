class Solution {
public:
    vector<int> row = {0, 1};
    vector<int> col = {1, 0};
    int m, n;
    vector<vector<int>> mat;
    vector<vector<int>> dp;

    int dfs(int r, int c) {
        if (r >= m || c >= n) {
            return 455261; // Return a larger value 
        }
        if (dp[r][c] != -1) {
            return dp[r][c]; 
        }
        if (r == m - 1 && c == n - 1) {
            return mat[r][c];
        }

        int pathsum_1 = mat[r][c] + dfs(r + row[0], c + col[0]);
        int pathsum_2 = mat[r][c] + dfs(r + row[1], c + col[1]);

        dp[r][c] = min(pathsum_1, pathsum_2);
        return dp[r][c];
    }

    int minPathSum(vector<vector<int>>& grid) {
        mat = grid;
        m = grid.size();
        n = grid[0].size();
        dp = vector<vector<int>>(m, vector<int>(n, -1)); 
        return dfs(0, 0);
    }
};

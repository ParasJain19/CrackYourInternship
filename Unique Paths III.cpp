class Solution {
public:
    vector<vector<int>> dp;
    vector<int> row = {0, 0, 1, -1};
    vector<int> col = {1, -1, 0, 0};
    int m, n;
    int totalEmpty = 0;
    int startX, startY;

    int dfs(int r, int c, int empty) {
     
        if (r < 0 || r >= m || c < 0 || c >= n || dp[r][c] == -1) return 0;
        
        // If we reached the end and have visited all empty squares, return 1
        if (dp[r][c] == 2) return empty == -1 ? 1 : 0;

        dp[r][c] = -1;

        int paths = 0;
        for (int i = 0; i < 4; ++i) {
            paths += dfs(r + row[i], c + col[i], empty - 1);
        }

        dp[r][c] = 0;

        return paths;
    }

    int uniquePathsIII(vector<vector<int>>& grid)
     {
        //vector<vector<int>> t(m,vector<int>(n,-1));
        dp=grid;
        m=grid.size();
        n=grid[0].size();
        int ans=0;
          for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 1) {
                    startX = i;
                    startY = j;
                }
                if (grid[i][j] == 0) {
                    totalEmpty++;
                }
            }
        }

        return dfs(startX, startY, totalEmpty);
    }
};

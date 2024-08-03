class Solution {
  public:
    vector<int> row = {1, 0, 0, -1}; 
    vector<int> col = {0, -1, 1, 0};
    string dir = "DLRU"; 
    vector<string> ans;
    int n;
    
    void dfs(string& res, vector<vector<int>>& mat, vector<vector<int>>& vis, int r, int c) {   
        if (r >= n || c >= n || r < 0 || c < 0) return;
        if (mat[r][c] == 0 || vis[r][c] == 1) return;
        
        if (r == n-1 && c == n-1) {
            ans.push_back(res);
            return;
        }
        
        vis[r][c] = 1;
        for (int i = 0; i < 4; i++) {
            res += dir[i];
            dfs(res, mat, vis, r + row[i], c + col[i]);
            res.pop_back();
        }
        vis[r][c] = 0; // Mark this cell as unvisited for other paths
    }
    
    vector<string> findPath(vector<vector<int>>& mat) {
        ans.clear();
        n = mat.size();
        if (n == 0 || mat[0][0] == 0 || mat[n-1][n-1] == 0) return ans;
        
        vector<vector<int>> vis(n, vector<int>(n, 0));
        string an = "";
        dfs(an, mat, vis, 0, 0);
        return ans; 
    }
};

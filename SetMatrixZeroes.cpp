class Solution {
public:
   void SetAllZeroes(vector<vector<int>>& matrix,int i,int j,vector<vector<int>>& vis)
   {
        int m = matrix.size();
        int n = matrix[0].size();
        for(int a=0;a<m;a++)
        {
            if(matrix[a][j]!=0)
            {
                vis[a][j]=1;
            }
            matrix[a][j]=0;
        }
        for(int a=0;a<n;a++)
        {
            if(matrix[i][a]!=0)
            {
                vis[i][a]=1;
            }
            matrix[i][a]=0;
        }            
   }

    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<vector<int>> vis(row, vector<int>(col, 0));

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (vis[i][j] == 0 && matrix[i][j] == 0) {
                    SetAllZeroes(matrix, i, j, vis);
                }
            }
        }
    }
};

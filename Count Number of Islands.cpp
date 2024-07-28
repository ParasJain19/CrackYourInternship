class Solution {
public:
   int n,m;
   vector<int> row={1,-1,0,0};
   vector<int> col={0,0,-1,1};
   void dfs(int r,int c,vector<vector<char>>& grid)
   {
    if(r<0 || r>=n || c<0 || c>=m || grid[r][c]!='1')
    {
        return;
    }
    grid[r][c]='2';//mark island to not count again same 
    for(int j=0;j<4;j++)
    {
        dfs(r+row[j],c+col[j],grid);
    }
   }
    int numIslands(vector<vector<char>>& grid) {
    n=grid.size();
    m=grid[0].size();
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]=='1')
            {
                dfs(i,j,grid);
                count+=1;
            }
        }
    }      
    return count;
    }
};

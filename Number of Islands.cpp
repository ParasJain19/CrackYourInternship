
geeksforgeeks number of island ,leetcode 200
class Solution {
  public:
  int n,m;
  vector<vector<char>> copy_grid;
    void mark_island_vis(int r,int c,vector<vector<char>>& copy_grid)
    {
        if(r<0 || r>=n || c<0 || c>=m || copy_grid[r][c]!='1')
        {
            return;
        }
  
          // either call dfs like this or make separate row col like:   int row=[1,-1,0,0,1,-1,-1,1], int row=[0,0,1,-1,1,-1,1,-1]
         //  and call in for loop like mark_island_vis(r+row[i],c+col[i],copy_grid); 
        //  refer unique path problems on leetcode 
          
        copy_grid[r][c]='2';//make visited
        mark_island_vis(r+1,c,copy_grid);//down
        mark_island_vis(r-1,c,copy_grid);//up
        mark_island_vis(r,c+1,copy_grid);//right
        mark_island_vis(r,c-1,copy_grid);//left
        mark_island_vis(r+1,c+1,copy_grid);//diag down right
        mark_island_vis(r-1,c-1,copy_grid);//diag up left
        mark_island_vis(r-1,c+1,copy_grid);//diag up right
        mark_island_vis(r+1,c-1,copy_grid);//diag down left
        
    }
    int numIslands(vector<vector<char>>& grid) {
        n=grid.size();
        m=grid[0].size();
        copy_grid=grid;
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(copy_grid[i][j]=='1')
                {
                    mark_island_vis(i,j,copy_grid);
                    count+=1;
                }
            }
        }
        return count;
    }
};

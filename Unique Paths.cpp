class Solution {
public:
   vector<vector<int>> dp;
   vector<int> row={1,0};
   vector<int> col={0,1};
   int a,b;
   int count=0;
   int dfs(int r,int c)
   {
    if(r==a-1 || c==b-1)
    {
        return 1;
    }
    if(dp[r][c]!=-1)
    {
        return dp[r][c];
    }
    count=0;
    for(int i=0;i<2;i++)
    {
        count=count+dfs(r+row[i],c+col[i]);
    }
    dp[r][c]=count;
    return dp[r][c];
   }
    int uniquePaths(int m, int n) {
        vector<vector<int>> t(m,vector<int>(n,-1));
        dp=t;
        a=m;
        b=n;
        int x=dfs(0,0);
        return x; 
    }
};

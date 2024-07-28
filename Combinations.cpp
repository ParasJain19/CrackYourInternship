class Solution {
public:
   vector<vector<int>> main;
   vector<int> ans;
   int num;
   void dfs(int i,int k,int number_choosen_till_now,vector<int>& ans)
   {
    if(number_choosen_till_now==k)
    {
    main.push_back(ans);
    return;
    }
    if(i>num)
    {
        return;
    }
    for(int j=i;j<=num;j++)
    {
        ans.push_back(j);
        dfs(j+1,k,ans.size(),ans);
        ans.pop_back();
    }
   }
    vector<vector<int>> combine(int n, int k) {
        num=n;
        dfs(1,k,0,ans);
        return main;
    }
};

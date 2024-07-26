class Solution {
public:
    vector<vector<int>> main;
    vector<int> ans;
    void dfs(vector<int>& candidates,int target,int i)
    {   if(target==0)
        {
            main.push_back(ans);
            return;
        }
        if(i>=candidates.size() || target<0)
        {
            return;
        }
        for(int j=i;j<candidates.size();j++)
        {
            if(j>i && candidates[j]==candidates[j-1]) continue;
            if(candidates[j]>target) break;

            ans.push_back(candidates[j]);
            dfs(candidates,target-candidates[j],j+1);
            ans.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        main.clear();
        ans.clear();
        dfs(candidates, target, 0);
        return main;
    }
};

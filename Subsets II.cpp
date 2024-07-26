class Solution {
public:
    void dfs(vector<int>& nums,int i,vector<vector<int>>& main,vector<int>& subset)
    { main.push_back(subset);
        // ye nhi use hoga
        // if(i>=nums.size())
        // {
        //     main.push_back(subset);
        //     return;
        // }
        for(int j=i;j<nums.size();j++)
        {
            if(j>i && nums[j]==nums[j-1]) continue;

            subset.push_back(nums[j]);
            dfs(nums,j+1,main,subset);
            subset.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
     sort(nums.begin(),nums.end());
     vector<vector<int>> main;
    vector<int> subset;
     dfs(nums,0,main,subset);
     return main;   
    }
};

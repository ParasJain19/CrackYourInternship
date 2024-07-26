class Solution {
public:
   void backtrack(vector<int> nums,int i,vector<vector<int>>& main,vector<int>& subset)
   {
    main.push_back(subset);//for empty subset at forst iteration

    for(int j=i;j<nums.size();j++)
    {
        subset.push_back(nums[j]);
        backtrack(nums,j+1,main,subset);
        subset.pop_back();
    }
   }
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<vector<int>> main;
       vector<int> subset;
       backtrack(nums,0,main,subset);
       return main;      
    }
};

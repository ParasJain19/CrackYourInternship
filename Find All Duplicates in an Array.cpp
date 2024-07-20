class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> countMap;

        for (int num : nums) 
        {
            countMap[num]++;
            if (countMap[num] == 2) 
            {
                ans.push_back(num);
            }
        }

        return ans;
    }
};

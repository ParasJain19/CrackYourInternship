class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int, int>> p;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size();i++) {
            int count = 1;
            int current = nums[i];
            while (i + 1 < nums.size() && nums[i + 1] == current) {
                count++;
                i++;
            }
            p.push_back({current, count});
        }

        sort(p.begin(), p.end(), [](const auto& a, const auto& b) {
            return a.second > b.second;
        });

        vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(p[i].first);
        }

        return ans;
    }
};

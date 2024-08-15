class Solution {
public:
     vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramGroups;
        // Process each string
        for (const string& str : strs) {
            // Create a sorted version of the string
            string sortedStr = str;
            sort(sortedStr.begin(), sortedStr.end());
            // Group the original string by its sorted version
            anagramGroups[sortedStr].push_back(str);
        }

        // Prepare the result vector
        vector<vector<string>> result;
        for (const auto& pair : anagramGroups) {
            result.push_back(pair.second);
        }

        return result;
    }
};

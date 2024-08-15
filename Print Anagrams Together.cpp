class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> anagramGroup;
        for(auto str:strs)
        {
            string sortt=str;
            sort(sortt.begin(),sortt.end());
            
            anagramGroup[sortt].push_back(str);
        }
        vector<vector<string>> ans;
        for(auto pair: anagramGroup)
        {
            ans.push_back(pair.second);
        }
        return ans;
    }
};

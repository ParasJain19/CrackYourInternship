class Solution {
public:
    int dfs(string s, int i, vector<int>& memo) {
        if (i >= s.length()) {
            return 1;
        }
        if (s[i] == '0') {
            return 0;
        }
        if (memo[i] != -1) {
            return memo[i];
        }
        int take1 = dfs(s, i + 1, memo);
        int take2 = 0;
        if (i + 1 < s.length() && ((s[i] == '1') || (s[i] == '2' && s[i+1] <= '6'))) {
            take2 = dfs(s, i + 2, memo);
        }
        memo[i] = take1 + take2;
        return memo[i];
    }

    int numDecodings(string s) {
        vector<int> memo(s.length(), -1);
        return dfs(s, 0, memo);
    }
};

class Solution {
public:
    vector<string> ans;
    
    void dfs(string res, int open, int close, int n) {
        // If the current string is valid, add it to the result
        if (res.size() == 2 * n) {
            ans.push_back(res);
            return;
        }

        // Add an opening parenthesis if we still have some left
        if (open < n) {
            dfs(res + "(", open + 1, close, n);
        }

        // Add a closing parenthesis if there are unmatched opening parentheses
        if (close < open) {
            dfs(res + ")", open, close + 1, n);
        }
    }
    
    vector<string> generateParenthesis(int n) {
        dfs("", 0, 0, n);
        return ans;
    }
};

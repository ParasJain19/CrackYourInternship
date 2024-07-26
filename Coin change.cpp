class Solution {
public:
    vector<int> coin;
    vector<vector<int>> memo;

    int dfs(int i, int sum) {
        if (sum == 0) {
            return 0;  // No more coins needed if sum is 0
        }
        if (sum < 0) {
            return INT_MAX;  // Return a large number to indicate an invalid path
        }
        if (i < 0) {
            return INT_MAX;  // Return a large number if no coins left
        }
        if (memo[i][sum] != -1) {
            return memo[i][sum];
        }

        int take = dfs(i, sum - coin[i]);
        if (take != INT_MAX) {
            take += 1;  // Add current coin if the path is valid
        }
        int skip = dfs(i - 1, sum);

        memo[i][sum] = min(take, skip);
        return memo[i][sum];
    }

    int coinChange(vector<int>& coins, int amount) {
        coin = coins;
        memo = vector<vector<int>>(coins.size(),vector<int>(amount + 1, -1));
        int result = dfs(coins.size() - 1, amount);
        return result == INT_MAX ? -1 : result;
    }
};

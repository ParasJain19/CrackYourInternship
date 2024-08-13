class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int sum = 0;
        for (int i = 1; i < colors.length(); i++) {
            // If the current balloon has the same color as the previous one
            if (colors[i] == colors[i - 1]) {
                // Add the minimum of the two needed times to the sum
                sum += min(neededTime[i], neededTime[i - 1]);
                // Ensure the larger time remains for the next comparison
                neededTime[i] = max(neededTime[i], neededTime[i - 1]);
            }
        }
        return sum;
    }
};

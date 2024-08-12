class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int totalSum = 0;

        // Calculate the sum of the first 'k' cards from the left
        for (int i = 0; i < k; i++) {
            totalSum += cardPoints[i];
        }

        int maxScore = totalSum;
         // basically check kar rhe hain
         // ek ek karke ki kya hoga agar starting ki jagah last meen se elements liye to
        // Now,remove cards from the left end and add cards from the right end
        for (int i = 0; i < k; i++) {
            totalSum = totalSum - cardPoints[k - 1 - i] + cardPoints[n - 1 - i];
            maxScore = max(maxScore, totalSum);
        }

        return maxScore;
    }
};

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int dp[prices.size() + 5][2];
        dp[1][0] = 0;
        dp[1][1] = -prices[0];
        for (int i = 2; i <= prices.size(); i++) {
            dp[i][0] = max(dp[i - 1][0], dp[i - 1][1] + prices[i - 1]);
            dp[i][1] = max(dp[i - 1][1], dp[i - 1][0] - prices[i - 1]);
        }
        return dp[prices.size()][0];
    }
};
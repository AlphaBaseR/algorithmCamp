class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int r = matrix.size(), c = matrix[0].size();
        vector<vector<int>> dp(r + 1, vector<int> (c + 1));
        int ans = 0;
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                if(matrix[i][j] == '1') {
                    dp[i][j] = 1;
                    ans = 1;
                } 
            }
        }
        for(int i = 1; i < r; i++) {
            for(int j = 1; j < c; j++) {
                if(dp[i][j]) dp[i][j] = min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1])) + 1;
                if(dp[i][j] > ans) {
                    ans = dp[i][j];
                }
            }
        }

        return ans * ans;
    }
};
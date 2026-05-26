class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size(), n = obstacleGrid[0].size();
        vector<long long> dp(n);
        if (obstacleGrid[0][0] == 1) return 0;
        dp[0] = 1;
        for (int i = 0; i < m; ++i) {
            if (obstacleGrid[i][0] == 1) dp[0] = 0;
            for (int j = 1; j < n; ++j) {
                if (obstacleGrid[i][j] == 1) dp[j] = 0;
                else dp[j] += dp[j - 1];
            }
        }
        return (int)dp[n - 1];
    }
};
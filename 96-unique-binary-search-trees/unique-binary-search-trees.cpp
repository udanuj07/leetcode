class Solution {
public:
    int numTrees(int n) {
        vector<long long> dp(n + 1);
        dp[0] = dp[1] = 1;
        for (int i = 2; i <= n; ++i) {
            long long cur = 0;
            for (int j = 1; j <= i; ++j) {
                cur += dp[j - 1] * dp[i - j];
            }
            dp[i] = cur;
        }
        return (int)dp[n];
    }
};
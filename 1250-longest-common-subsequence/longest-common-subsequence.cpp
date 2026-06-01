class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        if (text1.size() < text2.size()) swap(text1, text2);
        int n = text1.size(), m = text2.size();
        vector<int> dp(m + 1), prev(m + 1);
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                if (text1[i - 1] == text2[j - 1]) dp[j] = prev[j - 1] + 1;
                else dp[j] = max(prev[j], dp[j - 1]);
            }
            swap(dp, prev);
        }
        return prev[m];
    }
};
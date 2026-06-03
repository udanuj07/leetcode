#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        int n = s1.size(), m = s2.size();
        if (n + m != (int)s3.size()) return false;
        if (m > n) {
            swap(s1, s2);
            swap(n, m);
        }
        vector<int> dp(m + 1, 0);
        dp[0] = 1;
        for (int j = 1; j <= m; ++j)
            dp[j] = dp[j - 1] && s2[j - 1] == s3[j - 1];
        for (int i = 1; i <= n; ++i) {
            dp[0] = dp[0] && s1[i - 1] == s3[i - 1];
            for (int j = 1; j <= m; ++j) {
                dp[j] = (dp[j] && s1[i - 1] == s3[i + j - 1]) ||
                        (dp[j - 1] && s2[j - 1] == s3[i + j - 1]);
            }
        }
        return dp[m];
    }
};
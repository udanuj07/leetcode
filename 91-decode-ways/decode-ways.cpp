class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();
        if (n == 0 || s[0] == '0') return 0;
        int prev2 = 1, prev1 = 1;
        for (int i = 1; i < n; ++i) {
            int cur = 0;
            if (s[i] != '0') cur += prev1;
            int two = stoi(s.substr(i - 1, 2));
            if (two >= 10 && two <= 26) cur += prev2;
            prev2 = prev1;
            prev1 = cur;
        }
        return prev1;
    }
};
class Solution {
public:
    int longestPalindrome(string s) {
        int cnt[128] = {};
        for (char c : s) cnt[c]++;
        int len = 0, odd = 0;
        for (int i = 0; i < 128; ++i) {
            len += cnt[i] / 2 * 2;
            if (cnt[i] % 2) odd = 1;
        }
        return len + odd;
    }
};
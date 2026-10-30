class Solution {
public:
    int balancedStringSplit(string s) {
        int b = 0, ans = 0;
        for (char c : s) {
            b += c == 'L' ? 1 : -1;
            ans += b == 0;
        }
        return ans;
    }
};
class Solution {
public:
    string thousandSeparator(int n) {
        string s = to_string(n), ans;
        int c = 0;
        for (int i = (int)s.size() - 1; i >= 0; i--) {
            ans += s[i];
            if (++c % 3 == 0 && i > 0) ans += '.';
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
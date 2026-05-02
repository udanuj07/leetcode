class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string res;
        for (auto it = s.rbegin(); it != s.rend(); ++it) {
            if (*it == '-') continue;
            if (res.size() % (k + 1) == k) res += '-';
            res += toupper(*it);
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
class Solution {
public:
    string removeOuterParentheses(string s) {
        string r;
        r.reserve(s.size());
        int d = 0;
        for (char c : s) {
            if (c == '(') {
                if (d++) r += c;
            } else if (--d) r += c;
        }
        return r;
    }
};
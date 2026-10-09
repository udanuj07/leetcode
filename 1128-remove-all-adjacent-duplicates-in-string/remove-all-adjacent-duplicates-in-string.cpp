class Solution {
public:
    string removeDuplicates(string s) {
        int n = 0;
        for (char c : s) {
            if (n && s[n - 1] == c) n--;
            else s[n++] = c;
        }
        s.resize(n);
        return s;
    }
};
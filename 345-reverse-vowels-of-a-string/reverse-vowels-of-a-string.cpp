class Solution {
public:
    string reverseVowels(string s) {
        auto isv = [](char c) {
            c = tolower(c);
            return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
        };
        int i = 0, j = (int)s.size() - 1;
        while (i < j) {
            while (i < j && !isv(s[i])) ++i;
            while (i < j && !isv(s[j])) --j;
            if (i < j) swap(s[i++], s[j--]);
        }
        return s;
    }
};

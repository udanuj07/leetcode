class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<bool> bad(26,false);
        for(char c: brokenLetters) bad[c-'a'] = true;
        int ans = 0;
        bool ok = true;
        for(char c: text) {
            if (c == ' ') {
                if (ok) ++ans;
                ok = true;
            } else if (bad[c-'a']) ok = false;
        }
        if (ok) ++ans;
        return ans;
    }
};

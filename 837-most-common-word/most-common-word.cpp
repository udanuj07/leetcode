class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_set<string> ban(banned.begin(), banned.end());
        unordered_map<string,int> cnt;
        string w, ans;
        int best = 0;
        for (char &ch : paragraph) {
            if (isalpha(ch)) {
                w += tolower(ch);
            } else if (!w.empty()) {
                if (!ban.count(w)) {
                    int c = ++cnt[w];
                    if (c > best) best = c, ans = w;
                }
                w.clear();
            }
        }
        if (!w.empty() && !ban.count(w)) {
            int c = ++cnt[w];
            if (c > best) ans = w;
        }
        return ans;
    }
};

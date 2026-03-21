class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int cnt[26] = {0};
        for (char c : chars) cnt[c - 'a']++;
        int ans = 0;
        int cur[26];
        for (auto &w : words) {
            memset(cur, 0, sizeof(cur));
            for (char c : w) cur[c - 'a']++;
            bool ok = true;
            for (int i = 0; i < 26; ++i) {
                if (cur[i] > cnt[i]) {
                    ok = false;
                    break;
                }
            }
            if (ok) ans += w.size();
        }
        return ans;
    }
};

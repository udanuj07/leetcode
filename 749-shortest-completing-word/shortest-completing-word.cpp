class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        vector<int> need(26, 0);
        for (char c : licensePlate) {
            if (isalpha(c)) {
                c = tolower(c);
                need[c - 'a']++;
            }
        }
        string ans;
        for (auto &w : words) {
            if (!ans.empty() && w.size() >= ans.size()) continue;
            vector<int> cnt(26, 0);
            for (char c : w) cnt[c - 'a']++;
            bool ok = true;
            for (int i = 0; i < 26; ++i) {
                if (cnt[i] < need[i]) {
                    ok = false;
                    break;
                }
            }
            if (ok) ans = w;
        }
        return ans;
    }
};

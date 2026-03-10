class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> cnt(26, INT_MAX);
        for (auto &w : words) {
            vector<int> cur(26);
            for (char ch : w) ++cur[ch - 'a'];
            for (int i = 0; i < 26; ++i)
                cnt[i] = min(cnt[i], cur[i]);
        }
        vector<string> res;
        for (int i = 0; i < 26; ++i)
            for (int j = 0; j < cnt[i]; ++j)
                res.push_back(string(1, 'a' + i));
        return res;
    }
};

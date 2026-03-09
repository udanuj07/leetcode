class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        vector<int> pos(26);
        for (int i = 0; i < 26; ++i) pos[order[i] - 'a'] = i;
        for (int i = 0; i + 1 < (int)words.size(); ++i) {
            string &a = words[i], &b = words[i + 1];
            int n = a.size(), m = b.size(), j = 0;
            while (j < n && j < m && a[j] == b[j]) ++j;
            if (j == m && j < n) return false;
            if (j < n && j < m && pos[a[j] - 'a'] > pos[b[j] - 'a']) return false;
        }
        return true;
    }
};

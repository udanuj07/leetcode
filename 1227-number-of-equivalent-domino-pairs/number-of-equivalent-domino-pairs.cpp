class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int cnt[100] = {0};
        for (auto &d : dominoes) {
            int a = d[0], b = d[1];
            if (a > b) swap(a, b);
            ++cnt[a * 10 + b];
        }
        int ans = 0;
        for (int c : cnt) if (c > 1) ans += c * (c - 1) / 2;
        return ans;
    }
};

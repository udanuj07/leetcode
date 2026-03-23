class Solution {
public:
    int maximumUnits(vector<vector<int>>& B, int T) {
        sort(B.begin(), B.end(),
             [](auto& a, auto& b){ return a[1] > b[1]; });
        int ans = 0;
        for (auto& b : B) {
            int c = min(b[0], T);
            ans += c * b[1];
            T -= c;
            if (!T) break;
        }
        return ans;
    }
};

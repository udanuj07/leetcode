class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        for (int mask = 0; mask < (1 << 9); ++mask) {
            if (__builtin_popcount(mask) != k) continue;
            
            int sum = 0;
            vector<int> cur;
            for (int i = 0; i < 9; ++i) {
                if (mask & (1 << i)) {
                    sum += i + 1;
                    cur.push_back(i + 1);
                }
            }
            
            if (sum == n) ans.push_back(cur);
        }
        return ans;
    }
};
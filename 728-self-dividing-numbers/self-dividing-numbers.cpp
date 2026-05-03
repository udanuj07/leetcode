class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        auto ok = [&](int x) {
            for (int y = x; y; y /= 10) {
                int d = y % 10;
                if (d == 0 || x % d) return false;
            }
            return true;
        };
        vector<int> ans;
        for (int i = left; i <= right; ++i)
            if (ok(i)) ans.push_back(i);
        return ans;
    }
};
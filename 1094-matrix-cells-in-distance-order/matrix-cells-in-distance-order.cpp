#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        vector<vector<int>> res;
        res.reserve(rows * cols);
        for (int r = 0; r < rows; ++r)
            for (int c = 0; c < cols; ++c)
                res.push_back({r, c});
        sort(res.begin(), res.end(), [&](const vector<int>& a, const vector<int>& b) {
            int da = abs(a[0] - rCenter) + abs(a[1] - cCenter);
            int db = abs(b[0] - rCenter) + abs(b[1] - cCenter);
            return da < db;
        });
        return res;
    }
};

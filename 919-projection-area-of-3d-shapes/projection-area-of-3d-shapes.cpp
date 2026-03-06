class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int n = grid.size(), ans = 0;
        for (int i = 0; i < n; ++i) {
            int rmax = 0, cmax = 0;
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] > 0) ++ans;
                rmax = max(rmax, grid[i][j]);
                cmax = max(cmax, grid[j][i]);
            }
            ans += rmax + cmax;
        }
        return ans;
    }
};

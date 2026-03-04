class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m = img.size(), n = img[0].size();
        vector<vector<int>> ans(m, vector<int>(n));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                int sum = 0, cnt = 0;
                for (int di = -1; di <= 1; ++di) {
                    int x = i + di;
                    if (x < 0 || x >= m) continue;
                    for (int dj = -1; dj <= 1; ++dj) {
                        int y = j + dj;
                        if (y < 0 || y >= n) continue;
                        sum += img[x][y];
                        ++cnt;
                    }
                }
                ans[i][j] = sum / cnt;
            }
        }
        return ans;
    }
};

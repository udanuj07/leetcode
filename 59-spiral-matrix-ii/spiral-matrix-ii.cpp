class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> a(n, vector<int>(n));
        int top = 0, bottom = n - 1;
        int left = 0, right = n - 1;
        int cur = 1, target = n * n;
        while (cur <= target) {
            for (int j = left; j <= right && cur <= target; ++j) a[top][j] = cur++;
            ++top;
            for (int i = top; i <= bottom && cur <= target; ++i) a[i][right] = cur++;
            --right;
            for (int j = right; j >= left && cur <= target; --j) a[bottom][j] = cur++;
            --bottom;
            for (int i = bottom; i >= top && cur <= target; --i) a[i][left] = cur++;
            ++left;
        }
        return a;
    }
};
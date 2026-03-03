class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        int n = points.size();
        double ans = 0;
        for (int i = 0; i < n; ++i)
            for (int j = i + 1; j < n; ++j)
                for (int k = j + 1; k < n; ++k) {
                    double x1 = points[j][0] - points[i][0];
                    double y1 = points[j][1] - points[i][1];
                    double x2 = points[k][0] - points[i][0];
                    double y2 = points[k][1] - points[i][1];
                    double area = 0.5 * fabs(x1 * y2 - x2 * y1);
                    if (area > ans) ans = area;
                }
        return ans;
    }
};

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int m = mat.size(), n = mat[0].size();
        vector<pair<int,int>> v;
        v.reserve(m);
        for (int i = 0; i < m; ++i) {
            int l = 0, r = n - 1, pos = n;
            while (l <= r) {
                int mid = (l + r) / 2;
                if (mat[i][mid] == 1) l = mid + 1;
                else {
                    pos = mid;
                    r = mid - 1;
                }
            }
            v.push_back({pos, i});
        }
        sort(v.begin(), v.end());
        vector<int> ans;
        ans.reserve(k);
        for (int i = 0; i < k; ++i) ans.push_back(v[i].second);
        return ans;
    }
};
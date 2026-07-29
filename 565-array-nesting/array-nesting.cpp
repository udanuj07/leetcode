class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int n = nums.size();
        vector<char> vis(n, 0);
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            if (vis[i]) continue;
            int cur = i;
            int cnt = 0;
            while (!vis[cur]) {
                vis[cur] = 1;
                cur = nums[cur];
                ++cnt;
            }
            if (cnt > ans) ans = cnt;
        }
        return ans;
    }
};
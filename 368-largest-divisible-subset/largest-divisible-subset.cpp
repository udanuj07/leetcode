class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size(), best = 0;
        vector<int> dp(n, 1), parent(n, -1);

        for (int i = 1; i < n; ++i) {
            for (int j = i - 1; j >= 0; --j) {
                if (dp[j] >= dp[i] && nums[i] % nums[j] == 0) {
                    dp[i] = dp[j] + 1;
                    parent[i] = j;
                }
            }
            if (dp[i] > dp[best]) best = i;
        }

        vector<int> ans(dp[best]);
        for (int k = dp[best] - 1; k >= 0; --k) {
            ans[k] = nums[best];
            best = parent[best];
        }
        return ans;
    }
};
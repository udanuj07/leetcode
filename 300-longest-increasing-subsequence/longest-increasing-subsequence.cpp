class Solution {
public:
    int dp[2501][2503];

    int fun(int i, vector<int>& nums, int prev) {

        if (i >= nums.size())
            return 0;

        if (dp[i][prev + 1] != -1)
            return dp[i][prev + 1];

        int m = 0;

        if (prev == -1 || nums[i] > nums[prev]) {
            int a = 1 + fun(i + 1, nums, i);
            m = max(m, a);
        }

        int b = fun(i + 1, nums, prev);

        return dp[i][prev + 1] = max(m, b);
    }

    int lengthOfLIS(vector<int>& nums) {

        memset(dp, -1, sizeof(dp));

        return fun(0, nums, -1);
    }
};
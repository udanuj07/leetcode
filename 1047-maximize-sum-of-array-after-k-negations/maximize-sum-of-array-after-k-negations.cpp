class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() && k > 0 && nums[i] < 0; ++i, --k)
            nums[i] = -nums[i];
        int sum = 0, mn = INT_MAX;
        for (int x : nums) {
            sum += x;
            mn = min(mn, x);
        }
        if (k % 2) sum -= 2 * mn;
        return sum;
    }
};

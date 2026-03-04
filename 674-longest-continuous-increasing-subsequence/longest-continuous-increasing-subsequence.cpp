class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n = nums.size();
        int ans = 1, cur = 1;
        for (int i = 1; i < n; ++i) {
            if (nums[i] > nums[i - 1]) ++cur;
            else cur = 1;
            if (cur > ans) ans = cur;
        }
        return ans;
    }
};

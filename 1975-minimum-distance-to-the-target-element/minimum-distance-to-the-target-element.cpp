class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int n = nums.size();
        for (int d = 0; ; d++) {
            int l = start - d, r = start + d;
            if (l >= 0 && nums[l] == target) return d;
            if (r < n && nums[r] == target) return d;
        }
    }
};
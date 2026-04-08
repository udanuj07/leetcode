class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int n = nums.size(), total = 0;
        for (int i = 0; i < n; i += 2) total += nums[i];
        vector<int> ans;
        ans.reserve(total);
        for (int i = 0; i < n; i += 2)
            ans.insert(ans.end(), nums[i], nums[i + 1]);
        return ans;
    }
};
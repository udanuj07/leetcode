class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int> first, last, freq;
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            int x = nums[i];
            if (!freq.count(x)) first[x] = i;
            last[x] = i;
            ++freq[x];
        }
        int deg = 0;
        for (auto &p : freq) if (p.second > deg) deg = p.second;
        int ans = n;
        for (auto &p : freq) {
            if (p.second == deg) {
                int x = p.first;
                ans = min(ans, last[x] - first[x] + 1);
            }
        }
        return ans;
    }
};

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> cnt;
        cnt[0] = 1;
        int sum = 0, ans = 0;
        for (int x : nums) {
            sum += x;
            int r = ((sum % k) + k) % k;
            ans += cnt[r];
            ++cnt[r];
        }
        return ans;
    }
};
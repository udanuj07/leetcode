class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        if (valueDiff < 0) return false;
        unordered_map<long long,long long> b;
        long long w = (long long)valueDiff + 1;
        for (int i = 0; i < nums.size(); ++i) {
            long long x = nums[i];
            long long id = x >= 0 ? x / w : ((x + 1) / w - 1);
            if (b.count(id)) return true;
            if (b.count(id - 1) && llabs(x - b[id - 1]) <= valueDiff) return true;
            if (b.count(id + 1) && llabs(x - b[id + 1]) <= valueDiff) return true;
            b[id] = x;
            if (i >= indexDiff) {
                long long y = nums[i - indexDiff];
                long long oid = y >= 0 ? y / w : ((y + 1) / w - 1);
                b.erase(oid);
            }
        }
        return false;
    }
};

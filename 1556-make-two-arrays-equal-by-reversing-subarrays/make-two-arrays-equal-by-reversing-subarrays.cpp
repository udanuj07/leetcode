class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int cnt[1001] = {0};
        for (int x : target) ++cnt[x];
        for (int x : arr) {
            if (--cnt[x] < 0) return false;
        }
        return true;
    }
};
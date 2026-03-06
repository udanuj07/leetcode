class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sa = 0, sb = 0;
        for (int x : aliceSizes) sa += x;
        unordered_set<int> sbset;
        for (int x : bobSizes) {
            sb += x;
            sbset.insert(x);
        }
        int diff = (sa - sb) >> 1;
        for (int a : aliceSizes) {
            int b = a - diff;
            if (sbset.count(b)) return {a, b};
        }
        return {};
    }
};

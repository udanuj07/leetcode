class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int odd = 0;
        for (int p : position) odd += p & 1;
        int even = position.size() - odd;
        return min(odd, even);
    }
};

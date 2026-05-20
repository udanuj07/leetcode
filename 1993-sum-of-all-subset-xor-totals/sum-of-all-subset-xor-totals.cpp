class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int x = 0;
        for (int v : nums) x |= v;
        return x << (nums.size() - 1);
    }
};
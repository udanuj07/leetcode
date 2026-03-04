class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int dup = -1, missing = -1;
        for (int x : nums) {
            int i = abs(x) - 1;
            if (nums[i] < 0) dup = abs(x);
            else nums[i] = -nums[i];
        }
        for (int i = 0; i < (int)nums.size(); ++i) {
            if (nums[i] > 0) {
                missing = i + 1;
                break;
            }
        }
        return {dup, missing};
    }
};

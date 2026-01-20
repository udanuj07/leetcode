class NumArray {
public:
    vector<int> pre;  // pre[i] = sum of nums[0..i-1]

    NumArray(vector<int>& nums) {
        int n = nums.size();
        pre.resize(n + 1);
        pre[0] = 0;
        for (int i = 0; i < n; ++i) {
            pre[i + 1] = pre[i] + nums[i];
        }
    }

    int sumRange(int left, int right) {
        // sum of nums[left..right]
        return pre[right + 1] - pre[left];
    }
};

class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n = nums.size();
        vector<int> a(nums);
        nth_element(a.begin(), a.begin() + n / 2, a.end());
        int mid = a[n / 2];
        int i = 0, j = 0, k = n - 1;
        while (j <= k) {
            if (nums[(2 * j + 1) % (n | 1)] > mid) {
                swap(nums[(2 * i + 1) % (n | 1)], nums[(2 * j + 1) % (n | 1)]);
                i++; j++;
            } else if (nums[(2 * j + 1) % (n | 1)] < mid) {
                swap(nums[(2 * j + 1) % (n | 1)], nums[(2 * k + 1) % (n | 1)]);
                k--;
            } else {
                j++;
            }
        }
    }
};
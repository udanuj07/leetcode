class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for (int x : nums) {
            int d = 0;
            while (x) x /= 10, ++d;
            if (!(d & 1)) ++ans;
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> ans(num_people, 0);
        long long c = candies, i = 0;
        while (c > 0) {
            long long give = min(c, i + 1LL);
            ans[i % num_people] += give;
            c -= give;
            ++i;
        }
        return ans;
    }
};
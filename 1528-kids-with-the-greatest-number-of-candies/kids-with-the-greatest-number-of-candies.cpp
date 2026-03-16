class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int mx = *max_element(candies.begin(), candies.end());
        vector<bool> res;
        res.reserve(candies.size());
        for (int x : candies)
            res.push_back(x + extraCandies >= mx);
        return res;
    }
};

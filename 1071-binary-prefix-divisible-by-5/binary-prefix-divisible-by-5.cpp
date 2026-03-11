#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> ans;
        ans.reserve(nums.size());
        int x = 0;
        for (int v : nums) {
            x = ((x << 1) | v) % 5;
            ans.push_back(x == 0);
        }
        return ans;
    }
};

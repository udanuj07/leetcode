#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long a = LONG_MIN, b = LONG_MIN, c = LONG_MIN;
        for (int x : nums) {
            if (x == a || x == b || x == c) continue;
            if (x > a) { c = b; b = a; a = x; }
            else if (x > b) { c = b; b = x; }
            else if (x > c) { c = x; }
        }
        return c == LONG_MIN ? (int)a : (int)c;
    }
};

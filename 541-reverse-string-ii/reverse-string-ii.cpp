#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseStr(string s, int k) {
        for (int i = 0; i < (int)s.size(); i += 2 * k) {
            int r = min(i + k, (int)s.size());
            reverse(s.begin() + i, s.begin() + r);
        }
        return s;
    }
};
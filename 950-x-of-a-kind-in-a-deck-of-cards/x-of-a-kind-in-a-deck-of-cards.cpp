#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int> cnt;
        for (int x : deck) ++cnt[x];
        int g = 0;
        for (auto& p : cnt) g = gcd(g, p.second);
        return g >= 2;
    }
};

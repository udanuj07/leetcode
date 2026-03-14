#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        int base = 0;
        for (int i = 0; i < n; ++i) if (!grumpy[i]) base += customers[i];
        int gain = 0, best = 0;
        for (int i = 0; i < n; ++i) {
            if (grumpy[i]) gain += customers[i];
            if (i >= minutes && grumpy[i - minutes]) gain -= customers[i - minutes];
            if (i >= minutes - 1) best = max(best, gain);
        }
        return base + best;
    }
};

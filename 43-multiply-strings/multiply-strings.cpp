#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";
        
        int n1 = num1.size(), n2 = num2.size();
        vector<int> res(n1 + n2, 0);
        
        for (int i = n1 - 1; i >= 0; i--) {
            for (int j = n2 - 1; j >= 0; j--) {
                int mul = (num1[i] - '0') * (num2[j] - '0');
                int p1 = i + j, p2 = i + j + 1;
                mul += res[p2];
                res[p2] = mul % 10;
                res[p1] += mul / 10;
            }
        }
        
        string ans = "";
        for (int i = 0; i < res.size(); i++) {
            if (ans != "" || res[i] != 0) ans += to_string(res[i]);
        }
        
        return ans == "" ? "0" : ans;
    }
};
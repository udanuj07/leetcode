#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string decodeString(string s) {
        stack<pair<string,int>> st;
        string cur;
        int num = 0;
        for (char c : s) {
            if (isdigit(c)) {
                num = num * 10 + (c - '0');
            } else if (c == '[') {
                st.push({cur, num});
                cur.clear();
                num = 0;
            } else if (c == ']') {
                auto p = st.top();
                st.pop();
                string tmp;
                for (int i = 0; i < p.second; ++i) tmp += cur;
                cur = p.first + tmp;
            } else {
                cur += c;
            }
        }
        return cur;
    }
};
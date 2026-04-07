#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        int n = arr.size();
        vector<int> vis(n);
        queue<int> q;
        q.push(start);
        vis[start] = 1;
        while (!q.empty()) {
            int i = q.front();
            q.pop();
            if (arr[i] == 0) return true;
            int l = i - arr[i];
            int r = i + arr[i];
            if (l >= 0 && !vis[l]) {
                vis[l] = 1;
                q.push(l);
            }
            if (r < n && !vis[r]) {
                vis[r] = 1;
                q.push(r);
            }
        }
        return false;
    }
};
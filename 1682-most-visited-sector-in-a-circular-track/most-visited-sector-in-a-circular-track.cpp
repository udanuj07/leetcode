class Solution {
public:
    vector<int> mostVisited(int n, vector<int>& rounds) {
        int a = rounds[0], b = rounds.back();
        vector<int> ans;
        if (a <= b) {
            for (int i = a; i <= b; i++) ans.push_back(i);
        } else {
            for (int i = 1; i <= b; i++) ans.push_back(i);
            for (int i = a; i <= n; i++) ans.push_back(i);
        }
        return ans;
    }
};
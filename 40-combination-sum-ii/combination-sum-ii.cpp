class Solution {
public:
    void dfs(int start, int target, vector<int>& cur, vector<vector<int>>& ans, vector<int>& a) {
        if (target == 0) {
            ans.push_back(cur);
            return;
        }
        for (int i = start; i < (int)a.size(); ++i) {
            if (i > start && a[i] == a[i - 1]) continue;
            if (a[i] > target) break;
            cur.push_back(a[i]);
            dfs(i + 1, target - a[i], cur, ans, a);
            cur.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> cur;
        dfs(0, target, cur, ans, candidates);
        return ans;
    }
};
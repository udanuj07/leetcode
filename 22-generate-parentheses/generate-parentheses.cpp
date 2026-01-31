class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string cur;
        dfs(n, n, cur, res);
        return res;
    }
private:
    void dfs(int open, int close, string& cur, vector<string>& res) {
        if (!open && !close) {
            res.push_back(cur);
            return;
        }
        if (open) {
            cur.push_back('(');
            dfs(open - 1, close, cur, res);
            cur.pop_back();
        }
        if (close > open) {
            cur.push_back(')');
            dfs(open, close - 1, cur, res);
            cur.pop_back();
        }
    }
};

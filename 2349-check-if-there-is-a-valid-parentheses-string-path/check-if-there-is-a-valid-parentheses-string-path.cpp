class Solution {
public:
    int dp[101][101][201];

    int fun(int i, int j, vector<vector<char>>& grid, int balance) {
        int n = grid.size();
        int m = grid[0].size();

        if (i >= n || j >= m)
            return 0;

        if (grid[i][j] == '(')
            balance++;
        else
            balance--;

        if (balance < 0)
            return 0;

        int rem = (n - 1 - i) + (m - 1 - j);

        if (balance > rem || (balance + rem) % 2 != 0)
            return 0;

        if (i == n - 1 && j == m - 1)
            return balance == 0;

        if (dp[i][j][balance] != -1)
            return dp[i][j][balance];

        int c1 = fun(i + 1, j, grid, balance);
        int c2 = fun(i, j + 1, grid, balance);

        return dp[i][j][balance] = c1 | c2;
    }

    bool hasValidPath(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        if ((n + m - 1) % 2 != 0)
            return false;

        memset(dp, -1, sizeof(dp));

        return fun(0, 0, grid, 0);
    }
};
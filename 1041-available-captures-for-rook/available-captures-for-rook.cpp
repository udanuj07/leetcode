class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int r = 0, c = 0;
        for (int i = 0; i < 8; ++i)
            for (int j = 0; j < 8; ++j)
                if (board[i][j] == 'R') { r = i; c = j; }
        int ans = 0;
        int dr[4] = {-1, 0, 1, 0};
        int dc[4] = {0, 1, 0, -1};
        for (int k = 0; k < 4; ++k) {
            int x = r + dr[k], y = c + dc[k];
            while (x >= 0 && x < 8 && y >= 0 && y < 8 && board[x][y] != 'B') {
                if (board[x][y] == 'p') { ++ans; break; }
                x += dr[k];
                y += dc[k];
            }
        }
        return ans;
    }
};

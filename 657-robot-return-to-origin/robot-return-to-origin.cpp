class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0;
        for (char c : moves) {
            x += (c == 'R') - (c == 'L');
            y += (c == 'U') - (c == 'D');
        }
        return x == 0 && y == 0;
    }
};
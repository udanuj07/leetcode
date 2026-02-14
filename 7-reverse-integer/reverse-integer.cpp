class Solution {
public:
    int reverse(int x) {
        int r = 0;
        while (x) {
            int d = x % 10;
            x /= 10;
            if (r > 214748364 || (r == 214748364 && d > 7)) return 0;
            if (r < -214748364 || (r == -214748364 && d < -8)) return 0;
            r = r * 10 + d;
        }
        return r;
    }
};

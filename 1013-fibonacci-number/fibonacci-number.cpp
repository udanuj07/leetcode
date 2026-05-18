class Solution {
public:
    int fib(int n) {
        if (n <= 1) return n;
        int prev = 0, cur = 1;
        for (int i = 2; i <= n; ++i) {
            int f = prev + cur;
            prev = cur;
            cur = f;
        }
        return cur;
    }
};
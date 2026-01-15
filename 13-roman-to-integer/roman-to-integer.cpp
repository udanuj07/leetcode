class Solution {
public:
    int romanToInt(string s) {
        auto val = [](char c) {
            switch (c) {
                case 'I': return 1;
                case 'V': return 5;
                case 'X': return 10;
                case 'L': return 50;
                case 'C': return 100;
                case 'D': return 500;
                case 'M': return 1000;
            }
            return 0;
        };

        int n = s.size();
        int ans = 0;
        int maxSoFar = 0;

        for (int i = n - 1; i >= 0; --i) {
            int v = val(s[i]);
            if (v < maxSoFar) ans -= v;
            else {
                ans += v;
                maxSoFar = v;
            }
        }
        return ans;
    }
};

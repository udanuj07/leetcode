class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        int l = 0, r = n - 1, ans = n;
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (letters[m] > target) {
                ans = m;
                r = m - 1;
            } else {
                l = m + 1;
            }
        }
        if (ans == n) return letters[0];
        return letters[ans];
    }
};

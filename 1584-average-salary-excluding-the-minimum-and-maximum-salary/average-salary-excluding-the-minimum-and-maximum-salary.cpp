class Solution {
public:
    double average(vector<int>& salary) {
        int mn = salary[0], mx = salary[0], sum = 0;
        for (int x : salary) {
            mn = min(mn, x);
            mx = max(mx, x);
            sum += x;
        }
        return double(sum - mn - mx) / (salary.size() - 2);
    }
};
class Solution {
public:
    long long countIntersectingIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        long long total = (long long)n * (n - 1) / 2;

        vector<int> starts(n), ends(n);
        for (int i = 0; i < n; i++) {
            starts[i] = intervals[i][0];
            ends[i] = intervals[i][1];
        }
        sort(starts.begin(), starts.end());
        sort(ends.begin(), ends.end());

        long long nonIntersecting = 0;
        for (int i = 0; i < n; i++) {
            int lo = 0, hi = n;
            while (lo < hi) {
                int mid = (lo + hi) / 2;
                if (ends[mid] < starts[i]) lo = mid + 1;
                else hi = mid;
            }
            nonIntersecting += lo;
        }

        return total - nonIntersecting;
    }
};
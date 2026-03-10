class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum = accumulate(arr.begin(), arr.end(), 0);
        if (sum % 3) return false;
        int target = sum / 3, cur = 0, cnt = 0;
        for (int i = 0; i < arr.size(); ++i) {
            cur += arr[i];
            if (cur == target) {
                ++cnt;
                cur = 0;
                if (cnt == 2 && i < (int)arr.size() - 1) return true;
            }
        }
        return false;
    }
};

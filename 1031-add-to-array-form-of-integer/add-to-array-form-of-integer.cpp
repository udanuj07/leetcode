class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int i = num.size() - 1, carry = 0;
        vector<int> res;
        while (i >= 0 || k > 0 || carry) {
            int d1 = (i >= 0 ? num[i] : 0);
            int d2 = k % 10;
            int sum = d1 + d2 + carry;
            res.push_back(sum % 10);
            carry = sum / 10;
            if (i >= 0) --i;
            k /= 10;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};

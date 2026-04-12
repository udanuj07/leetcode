class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.size() - 1, j = num2.size() - 1, carry = 0;
        string res;
        while (i >= 0 || j >= 0 || carry) {
            int x = i >= 0 ? num1[i] - '0' : 0;
            int y = j >= 0 ? num2[j] - '0' : 0;
            int s = x + y + carry;
            res.push_back(char('0' + (s % 10)));
            carry = s / 10;
            i--;
            j--;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
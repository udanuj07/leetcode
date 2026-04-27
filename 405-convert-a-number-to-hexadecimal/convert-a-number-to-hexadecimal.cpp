class Solution {
public:
    string toHex(int num) {
        if (num == 0) return "0";
        string res = "";
        while (num && res.size() < 8) {
            int digit = num & 15;
            res = (char)(digit < 10 ? '0' + digit : 'a' + digit - 10) + res;
            num = (unsigned)num >> 4;
        }
        return res;
    }
};
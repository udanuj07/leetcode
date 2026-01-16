class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};

        vector<string> mapping(10);
        mapping[2] = "abc";
        mapping[3] = "def";
        mapping[4] = "ghi";
        mapping[5] = "jkl";
        mapping[6] = "mno";
        mapping[7] = "pqrs";
        mapping[8] = "tuv";
        mapping[9] = "wxyz";

        vector<string> res;
        string cur;
        backtrack(digits, 0, mapping, cur, res);
        return res;
    }

private:
    void backtrack(const string &digits, int idx,
                   const vector<string> &mapping,
                   string &cur,
                   vector<string> &res) {
        if (idx == digits.size()) {
            res.push_back(cur);
            return;
        }

        int d = digits[idx] - '0';
        const string &letters = mapping[d];
        for (char c : letters) {
            cur.push_back(c);
            backtrack(digits, idx + 1, mapping, cur, res);
            cur.pop_back();
        }
    }
};

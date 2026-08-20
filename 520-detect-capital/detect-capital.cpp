class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size();
        if (word[0] >= 'a' && word[0] <= 'z') {
            for (int i = 1; i < n; i++)
                if (word[i] < 'a' || word[i] > 'z') return false;
        } else {
            bool lower = n > 1 && word[1] >= 'a' && word[1] <= 'z';
            for (int i = 2; i < n; i++)
                if ((word[i] >= 'a' && word[i] <= 'z') != lower) return false;
        }
        return true;
    }
};
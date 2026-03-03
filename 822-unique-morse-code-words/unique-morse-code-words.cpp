class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        static const string morse[26] = {
            ".-","-...","-.-.","-..",".","..-.","--.","....","..",
            ".---","-.-",".-..","--","-.","---",".--.","--.-",".-.",
            "...","-","..-","...-",".--","-..-","-.--","--.."
        };
        unordered_set<string> st;
        for (auto &w : words) {
            string t;
            for (char c : w) t += morse[c - 'a'];
            st.insert(t);
        }
        return (int)st.size();
    }
};

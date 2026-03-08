class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> st;
        for (string &e : emails) {
            string local, domain;
            int i = 0, n = e.size();
            while (i < n && e[i] != '@' && e[i] != '+') {
                if (e[i] != '.') local += e[i];
                ++i;
            }
            while (i < n && e[i] != '@') ++i;
            domain = e.substr(i);
            st.insert(local + domain);
        }
        return st.size();
    }
};

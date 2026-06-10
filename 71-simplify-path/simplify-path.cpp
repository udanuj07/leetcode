class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        string cur;
        for (char c : path) {
            if (c == '/') {
                if (cur == "..") { if (!st.empty()) st.pop(); }
                else if (cur != "" && cur != ".") st.push(cur);
                cur = "";
            } else cur += c;
        }
        if (cur == "..") { if (!st.empty()) st.pop(); }
        else if (cur != "" && cur != ".") st.push(cur);
        string res = "";
        while (!st.empty()) { res = "/" + st.top() + res; st.pop(); }
        return res == "" ? "/" : res;
    }
};
class Solution {
public:
    string defangIPaddr(string address) {
        string r;
        r.reserve(address.size() + 6);
        for (char c : address) {
            if (c == '.') r += "[.]";
            else r += c;
        }
        return r;
    }
};
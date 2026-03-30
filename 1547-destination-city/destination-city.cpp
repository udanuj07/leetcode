class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> start;
        for (auto &p : paths) start.insert(p[0]);
        for (auto &p : paths) {
            if (!start.count(p[1])) return p[1];
        }
        return "";
    }
};
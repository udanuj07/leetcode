class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int c[2] = {0, 0};
        for (int x : students) c[x]++;
        for (int x : sandwiches) {
            if (c[x] == 0) break;
            c[x]--;
        }
        return c[0] + c[1];
    }
};
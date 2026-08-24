class Solution {
public:
    void fun(vector<int> input, vector<int> output, vector<vector<int>>& ans) {
        if (input.empty()) {
            ans.push_back(output);
            return;
        }

        for (int i = 0; i < input.size(); i++) {
            vector<int> ip = input;
            vector<int> op = output;

            op.push_back(ip[i]);
            ip.erase(ip.begin() + i);

            fun(ip, op, ans);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> input = nums;
        vector<int> output;

        fun(input, output, ans);

        return ans;
    }
};
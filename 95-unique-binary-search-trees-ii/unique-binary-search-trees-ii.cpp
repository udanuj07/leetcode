class Solution {
public:
    vector<vector<vector<TreeNode*>>> memo;

    vector<TreeNode*> build(int l, int r) {
        if (l > r) return {nullptr};
        if (!memo[l][r].empty()) return memo[l][r];

        vector<TreeNode*> res;
        for (int i = l; i <= r; ++i) {
            auto left = build(l, i - 1);
            auto right = build(i + 1, r);
            for (auto L : left) {
                for (auto R : right) {
                    TreeNode* root = new TreeNode(i);
                    root->left = L;
                    root->right = R;
                    res.push_back(root);
                }
            }
        }
        return memo[l][r] = res;
    }

    vector<TreeNode*> generateTrees(int n) {
        memo.assign(n + 2, vector<vector<TreeNode*>>(n + 2));
        if (n == 0) return {};
        return build(1, n);
    }
};
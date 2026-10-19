class Solution {
public:
    long long ans = LLONG_MAX;
    int rootVal;

    void dfs(TreeNode* n) {
        if (!n || n->val >= ans) return;
        if (n->val > rootVal) {
            ans = n->val;
            return;
        }
        dfs(n->left);
        dfs(n->right);
    }

    int findSecondMinimumValue(TreeNode* root) {
        rootVal = root->val;
        dfs(root);
        return ans == LLONG_MAX ? -1 : ans;
    }
};
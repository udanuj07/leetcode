class Solution {
public:
    int sum = 0;
    void dfs(TreeNode* root, int cur) {
        if (!root) return;
        cur = (cur << 1) | root->val;
        if (!root->left && !root->right) {
            sum += cur;
            return;
        }
        dfs(root->left, cur);
        dfs(root->right, cur);
    }
    int sumRootToLeaf(TreeNode* root) {
        dfs(root, 0);
        return sum;
    }
};
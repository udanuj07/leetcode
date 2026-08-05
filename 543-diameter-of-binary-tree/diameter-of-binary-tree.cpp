class Solution {
    int ans = 0;
    int dfs(TreeNode* node) {
        if (!node) return 0;
        int l = dfs(node->left);
        int r = dfs(node->right);
        ans = max(ans, l + r);
        return 1 + max(l, r);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
        return ans;
    }
};
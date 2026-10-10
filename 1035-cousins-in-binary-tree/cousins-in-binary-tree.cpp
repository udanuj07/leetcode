class Solution {
public:
    int dx = -1, dy = -1;
    TreeNode *px = nullptr, *py = nullptr;

    void dfs(TreeNode* root, TreeNode* parent, int x, int y, int depth) {
        if (!root) return;
        if (root->val == x) { dx = depth; px = parent; }
        if (root->val == y) { dy = depth; py = parent; }
        dfs(root->left, root, x, y, depth + 1);
        dfs(root->right, root, x, y, depth + 1);
    }

    bool isCousins(TreeNode* root, int x, int y) {
        dfs(root, nullptr, x, y, 0);
        return dx == dy && px != py;
    }
};
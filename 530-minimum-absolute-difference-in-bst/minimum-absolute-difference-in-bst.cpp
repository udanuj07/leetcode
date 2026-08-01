class Solution {
public:
    int getMinimumDifference(TreeNode* root) {
        int ans = INT_MAX;
        int prev = -1;
        inorder(root, prev, ans);
        return ans;
    }
    
    void inorder(TreeNode* node, int &prev, int &ans) {
        if (!node) return;
        inorder(node->left, prev, ans);
        if (prev != -1) ans = min(ans, node->val - prev);
        prev = node->val;
        inorder(node->right, prev, ans);
    }
};
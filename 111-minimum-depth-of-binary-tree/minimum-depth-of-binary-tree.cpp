class Solution {
public:
    int minDepth(TreeNode* root) {
        if (!root) return 0;
        int l = minDepth(root->left);
        int r = minDepth(root->right);
        if (!l || !r) return l + r + 1;
        return 1 + min(l, r);
    }
};

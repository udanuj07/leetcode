class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if (!original) return nullptr;
        if (original == target) return cloned;
        TreeNode* l = getTargetCopy(original->left, cloned->left, target);
        if (l) return l;
        return getTargetCopy(original->right, cloned->right, target);
    }
};
class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        return !root || ((!root->left || (root->left->val == root->val && isUnivalTree(root->left))) &&
                         (!root->right || (root->right->val == root->val && isUnivalTree(root->right))));
    }
};
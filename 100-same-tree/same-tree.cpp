class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        queue<TreeNode*> qu;
        qu.push(p);
        qu.push(q);
        while (!qu.empty()) {
            TreeNode* a = qu.front(); qu.pop();
            TreeNode* b = qu.front(); qu.pop();
            if (!a && !b) continue;
            if (!a || !b || a->val != b->val) return false;
            qu.push(a->left);
            qu.push(b->left);
            qu.push(a->right);
            qu.push(b->right);
        }
        return true;
    }
};

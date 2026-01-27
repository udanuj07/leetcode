class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (!root) return {};
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            int n = q.size();
            vector<int> l;
            while (n--) {
                TreeNode* c = q.front();
                q.pop();
                l.push_back(c->val);
                if (c->left) q.push(c->left);
                if (c->right) q.push(c->right);
            }
            ans.push_back(l);
        }
        return ans;
    }
};
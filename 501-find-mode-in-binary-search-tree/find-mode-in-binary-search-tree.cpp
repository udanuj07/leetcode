class Solution {
public:
    int prev = 0, count = 0, mx = 0;
    bool first = true;
    vector<int> ans;

    void dfs(TreeNode* root) {
        if (!root) return;

        dfs(root->left);

        if (first || root->val != prev) {
            prev = root->val;
            count = 1;
            first = false;
        } else {
            count++;
        }

        if (count > mx) {
            mx = count;
            ans.clear();
            ans.push_back(root->val);
        } else if (count == mx) {
            ans.push_back(root->val);
        }

        dfs(root->right);
    }

    vector<int> findMode(TreeNode* root) {
        dfs(root);
        return ans;
    }
};
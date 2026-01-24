class Solution {
public:
vector<int> inorderTraversal(TreeNode* root) {
vector<int> res;
stack<TreeNode*> s;
TreeNode* curr = root;
while (curr || !s.empty()) {
while (curr) {
s.push(curr);
curr = curr->left;
}
curr = s.top();
s.pop();
res.push_back(curr->val);
curr = curr->right;
}
return res;
}
};
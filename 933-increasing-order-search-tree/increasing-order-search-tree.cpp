class Solution {
public:
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode dummy;
        TreeNode* tail = &dummy;
        stack<TreeNode*> st;
        
        while (root || !st.empty()) {
            while (root) {
                st.push(root);
                root = root->left;
            }
            
            root = st.top();
            st.pop();
            root->left = nullptr;
            tail->right = root;
            tail = root;
            root = root->right;
        }
        
        return dummy.right;
    }
};
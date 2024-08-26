class Solution {
public:
    stack<pair<int,int>> a;
    stack<pair<int,int>> b;

    void dfs(TreeNode* root, stack<pair<int,int>>& st, int i) {
        if (root == nullptr) {
            return;
        }

        st.push({root->val, i});
        dfs(root->left, st, i + 1);
        dfs(root->right, st, i + 2);
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        dfs(p, a, 0);
        dfs(q, b, 0);
        return a == b;
    }
};

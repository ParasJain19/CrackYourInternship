
class Solution {
public:
    bool dfs(TreeNode* root, int k) {
        if (root == nullptr) {
            return false; // No path if the node is null
        }
        
        k -= root->val; // Subtract the current node's value from the sum
        
        if (root->left == nullptr && root->right == nullptr) { // Check if it's a leaf
            return k == 0; // If it's a leaf, check if the sum equals the target
        }
        
        // Recur on left and right subtrees
        return dfs(root->left, k) || dfs(root->right, k);
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        return dfs(root, targetSum);
    }
};

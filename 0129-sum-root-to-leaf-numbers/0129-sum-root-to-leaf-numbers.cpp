/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int solve(TreeNode* root, int sum) {
    if (root == nullptr) {
        return 0;
    }
    
    // Calculate the current path value
    int current_sum = sum * 10 + root->val;
    
    // If it's a leaf node, return the calculated path value
    if (root->left == nullptr && root->right == nullptr) {
        return current_sum;
    }
    
    // Recursively sum up paths from left and right subtrees
    int l = solve(root->left, current_sum);
    int r = solve(root->right, current_sum);
    
    return l + r;
}
    int sumNumbers(TreeNode* root) {
        return solve(root,0);
    }
};
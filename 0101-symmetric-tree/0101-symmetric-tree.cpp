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
    bool isSymmetric(TreeNode* root) {
    // An empty tree is always symmetric
    if (root == nullptr) return true;
    
    // We create a helper inside or outside to track both sides
    return check(root->left, root->right);
}

// Easy helper function to compare two sides
bool check(TreeNode* left, TreeNode* right) {
    // 1. Both are empty? Perfect match!
    if (left == nullptr && right == nullptr) return true;
    
    // 2. Only one is empty? Not a match.
    if (left == nullptr || right == nullptr) return false;
    
    // 3. Values don't match? Not symmetric.
    if (left->val != right->val) return false;
    
    // 4. Check the mirrors: outer pairs and inner pairs
    return check(left->left, right->right) && check(left->right, right->left);
}
};
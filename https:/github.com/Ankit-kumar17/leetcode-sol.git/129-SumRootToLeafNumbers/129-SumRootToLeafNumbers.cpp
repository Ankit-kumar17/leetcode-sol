// Last updated: 7/21/2026, 4:35:34 PM
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 * };
 */
class Solution {
public:
    int solve(TreeNode* root, int current) {
        if (!root) return 0;

        current = current * 10 + root->val;

        // leaf node
        if (!root->left && !root->right) {
            return current;
        }

        return solve(root->left, current) + solve(root->right, current);
    }

    int sumNumbers(TreeNode* root) {
        return solve(root, 0);
    }
};
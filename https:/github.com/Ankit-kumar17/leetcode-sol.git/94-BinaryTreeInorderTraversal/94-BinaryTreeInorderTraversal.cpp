// Last updated: 7/21/2026, 4:35:42 PM
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 * };
 */
class Solution {
public:
    void inorder(TreeNode* root, vector<int>& ans) {
        if (!root) return;

        inorder(root->left, ans);   // left
        ans.push_back(root->val);   // root
        inorder(root->right, ans);  // right
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        inorder(root, ans);
        return ans;
    }
};
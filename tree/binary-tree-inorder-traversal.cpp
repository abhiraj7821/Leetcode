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
    void solve(TreeNode* root, vector<int> &ans){
         // Inorder traversal -> (left root right)
        if(root == NULL) return;
        // Go to left
        solve(root->left,ans);
        // Print/Add the root node to ans
        ans.push_back(root->val);
        // Go to Right
        solve(root->right,ans);
    }
    vector<int> inorderTraversal(TreeNode* root) {
       vector<int> ans;
       solve(root,ans);
       return ans;
    }
};
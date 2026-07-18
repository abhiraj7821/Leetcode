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
    bool checkMirror(TreeNode* leftTree,TreeNode* rightTree){
        // base case
        if(leftTree==NULL && rightTree==NULL)
            return true;
        
        if(leftTree!=NULL && rightTree==NULL)
            return false;

        if(leftTree==NULL && rightTree!=NULL)
            return false;
        
        if(leftTree->val != rightTree->val)
            return false;

        bool op1 = checkMirror(leftTree->left,rightTree->right);
        bool op2 = checkMirror(leftTree->right,rightTree->left);
        bool finalAns = op1 && op2;
        return finalAns;
    }
    bool isSymmetric(TreeNode* root) {
        return checkMirror(root->left,root->right);
    }
};
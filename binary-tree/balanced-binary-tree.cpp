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
private:
//     int solve(TreeNode* root,bool& marker){
//         if(root==NULL) return 0;
//         int leftH = solve(root->left,marker);
//         int rightH = solve(root->right,marker);
//         int ans = max(leftH,rightH)+1;
//         int balH = leftH-rightH;
//         if (balH < 0 ) balH*=-1;
//         cout<<"Left h "<<leftH<<endl;
//         cout<<"Right h "<<rightH<<endl;
//         if( balH > 1 ) {
//             marker=false;
//         }
//         return ans;
//     }
    int btHeight(TreeNode* root){
        if (root==NULL) return 0;
        int lHeight = btHeight(root->left);
        int rHeight = btHeight(root->right);
        int ans = max(lHeight,rHeight)+1;
        return ans;
    }
public:
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        int leftH = btHeight(root->left);
        int rightH = btHeight(root->right);
        if(abs(leftH-rightH)>1) return false;
        bool left = isBalanced(root->left);
        bool right = isBalanced(root->right);
        if(!left || !right) return false;
        return true;
    }
};
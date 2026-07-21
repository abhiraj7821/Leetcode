/* Node Structure
class Node {
  public:
    int data;
    Node* left, *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
private:
    void leftTraversal(Node* root, vector<int>& ans){
        if(root==NULL)
            return;
        if(root->left==NULL && root->right==NULL){
            return;
        }
        
        // Ans push
        ans.push_back(root->data);
        
        if(root->left)
            leftTraversal(root->left,ans);
        else
            leftTraversal(root->right,ans);
    }
    
    void leafTraversal(Node* root, vector<int>& ans){
        if(root==NULL)
            return;
        if(root->left==NULL && root->right==NULL){
            ans.push_back(root->data);
            return;
        }
        
        // left
        if(root->left)
            leafTraversal(root->left,ans);
        if(root->right)
            leafTraversal(root->right,ans);
    }
    
    void rightTraversal(Node* root, vector<int>& ans){
        if(root==NULL)
            return;
        if(root->left==NULL && root->right==NULL)
            return;
        
        if(root->right)
            rightTraversal(root->right,ans);
        else
            rightTraversal(root->left,ans);
        
        ans.push_back(root->data);
    }
  public:
    vector<int> boundaryTraversal(Node *root) {
        // code here
        vector<int> ans;
        ans.push_back(root->data);
        
        if(root->left==NULL && root->right==NULL)
            return ans;
        
        // Left traversal
        leftTraversal(root->left,ans);
        
        // leaf traversal
        leafTraversal(root,ans);
        
        // Right traversal
        rightTraversal(root->right,ans);
        
        return ans;
        
        
    }
};
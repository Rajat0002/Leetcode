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
    
    TreeNode* solve(TreeNode* root){
        if(root==NULL ){
            return root;
        }
        TreeNode* left_val=solve(root->left);
        TreeNode* right_val=solve(root->right);
        
        root->left=right_val;
        root->right=left_val;
        return root;
    }
    TreeNode* invertTree(TreeNode* root) {
       
        TreeNode* ans=solve(root);
        return ans;
    }
};
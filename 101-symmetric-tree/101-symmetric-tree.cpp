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
    
    bool recursive_sol(TreeNode* left, TreeNode* right){
        if(left==NULL && right==NULL){
            return true;
        }
        if ((left && right==NULL) || (right && left==NULL) || (left->val != right->val)){
           return false;
        }
        return recursive_sol(left->left,right->right) && recursive_sol(left->right,right->left);
    }
    
    bool isSymmetric(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        
        return recursive_sol(root->left,root->right);
    }
};
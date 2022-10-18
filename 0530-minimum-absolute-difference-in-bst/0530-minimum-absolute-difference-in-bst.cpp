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
         vector<int> v;
    void inorder(TreeNode* root){
        
        if(root==NULL){
            return;
         }
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
        
    }
    int getMinimumDifference(TreeNode* root) {
//         if(root==NULL){
//             return 0;
//         }
//         if(root->left==NULL && root->right==NULL){
//             return root->val;
//         }
//         int diff=0;
//         int left_val=getMinimumDifference(root->left);
//         int right_val=getMinimumDifference(root->right);
        
//         int v=min(left_val,right_val);
        
//         return root->val-v;
        
       inorder(root);
        int diff= INT_MAX;
        for(int i=1;i<v.size();i++){
            diff=min(diff,abs(v[i]-v[i-1]));
        }
        return diff;
    }
};
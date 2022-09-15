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
    int traverse(TreeNode* root,int &maxi){
        if(root==NULL){
            return 0;
        }
        int l=traverse(root->left,maxi);
      
        int r=traverse(root->right,maxi);
        maxi=max({maxi, l+r + root->val, root->val, root->val+l , root->val+r});
        return max({root->val, root->val+l , root->val + r});
    }
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        traverse(root,maxi);
        return maxi;
        
    }
};
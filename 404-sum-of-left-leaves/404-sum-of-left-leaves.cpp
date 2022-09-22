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
    int recurse(TreeNode* root, int &sum){
        if(root==NULL){
           return 0;
        }
        if(root->left==NULL && root->right==NULL){
            return root->val;
        }
        sum+=recurse(root->left,sum);
        recurse(root->right,sum);  
        return 0;
        
}
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        
        recurse(root,sum);
        return sum;
    }
};
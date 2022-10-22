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
    // bool postorder(TreeNode* root){
    //       if(root==NULL){
    //           return false;
    //       }
    //     postorder(root->left);
    //     postorer(root->right);
    //     if(root->val==2){
    //         return (root->left || root->right);
    //     }
    //     return (root->left && root->right);
    // }
    bool evaluateTree(TreeNode* root) {
        //postorder(root);
            if(root->left==NULL && root->right==NULL){
              return root->val;
          }
        bool l=evaluateTree(root->left);
        bool r=evaluateTree(root->right);
        if(root->val==2){
            return ( l || r);
        }
        return (l && r);
    }
};
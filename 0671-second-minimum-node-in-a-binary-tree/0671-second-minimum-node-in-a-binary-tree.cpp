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
    set <int> v;
    void inorder(TreeNode* root){
        if(root==NULL){
            return;
        }
        inorder(root->left);
        v.insert(root->val);
        inorder(root->right);
        
    }
    int findSecondMinimumValue(TreeNode* root) {
        inorder(root);
        if(v.size()==1){
            return -1;
        }
        
        v.erase(v.begin());
        return *v.begin();
        
        
        
        
    }
};
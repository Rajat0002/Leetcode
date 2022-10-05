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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        //TreeNode* temp;
        //TreeNode* curr;
        
        //temp=root;
        if(depth==1){
           TreeNode* newRoot=new(TreeNode);
            newRoot->val=val;
            newRoot->left=root;
            return newRoot;
        }
        addingRow(root,1,val,depth);
        return root;
        
    }
    void addingRow(TreeNode* root ,int currentDepth, int val ,int depth){
        if(root==nullptr){
            return;
        }
        if(currentDepth+1==depth){
            TreeNode* left=new(TreeNode);
            left->left=root->left;
            left->val=val;
            
            TreeNode* right=new(TreeNode);
            right->right=root->right;
            right->val=val;
            
            root->left = left;
            root->right = right;
            return;
        }
            addingRow(root->left, currentDepth+1, val, depth);
            addingRow(root->right, currentDepth+1, val, depth);
            return;
            
        
        
    }
};
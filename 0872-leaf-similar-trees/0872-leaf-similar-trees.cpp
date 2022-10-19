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
    
    
    void order(TreeNode* root, vector<int>& v){
        if(root==NULL){
            return;
        }
        
        if(root->left==NULL && root->right==NULL){
            v.push_back(root->val);
        }
        order(root->left,v);
        order(root->right,v);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1;
        vector<int> v2;
        
        order(root1,v1);
        order(root2,v2);
        // for(int i=0; i<v1.size();i++){
        //     if(v1[i]==v2[i]){
        //         return true;
        //     }
        // }
        // return false;
        return v1==v2;
       
    }
};
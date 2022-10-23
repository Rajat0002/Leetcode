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
    void solve(TreeNode* root, vector<string> & s,string ds){
        if(root==NULL){
            return;
        }
        if(root->left==NULL && root->right==NULL){
            s.push_back(ds+to_string(root->val));
            //return;
        }
        solve(root->left,s,ds+to_string(root->val)+"->");
        solve(root->right,s,ds+to_string(root->val)+"->");
        
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
//         vector<string> v;
//         if(root==NULL){
//             v.push_back(" ");
//         }
//         vector<string> l=binaryTreePaths(root->left);
//         v.push_back(to_string(root->val) + "->" + l);

//         vector<string> r=binaryTreePaths(root->right);
//         v.push_back(to_string(root->val) + "->" + r);
//         return v;
        
        
        vector<string> s;
        string ds;
        solve(root,s,ds);
            
        return s;    
    }
};
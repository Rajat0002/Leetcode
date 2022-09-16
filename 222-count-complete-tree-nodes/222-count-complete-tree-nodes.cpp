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
    void traverse(TreeNode* root,vector<int> &v){
        if(root==NULL){
            return;
        }
        traverse(root->left,v);
        v.push_back(root->val);
        traverse(root->right,v);
        
    }
    int countNodes(TreeNode* root) {
        vector<int> v;
        traverse(root,v);
        int count;
        if(v.size()==0){
            return 0;
        }
        for(int i=0;i<v.size();i++){
            count++;
        }
        return count;
    }
};
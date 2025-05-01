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
int d=0;
    int height(TreeNode* root){
        if(!root){
            return 0;
        }
        int a=height(root->left);
        int b=height(root->right);
        
        d=max(d,a+b);
        return 1+max(a,b);
    
    }
    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return d;
     
        
    }
};
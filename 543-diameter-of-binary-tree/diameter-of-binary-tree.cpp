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
    int level(TreeNode* root){
        if(root==NULL)
            return 0;
        return 1+max(level(root->left),level(root->right));
    }
    void sol(TreeNode* root,int &ans){
        if(root==NULL)
            return;
        int dia=level(root->left)+level(root->right);
        ans=max(ans,dia);
        sol(root->left,ans);
        sol(root->right,ans);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int ans=0;
        sol(root,ans);
        return ans;
    }
};
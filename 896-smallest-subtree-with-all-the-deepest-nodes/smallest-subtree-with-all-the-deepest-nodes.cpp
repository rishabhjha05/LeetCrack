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
        if(!root)
            return 0;
        return 1+max(level(root->left),level(root->right));
    }
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        int l=level(root->left),r=level(root->right);
        if(l==r)
            return root;
        else if(l<r)
            return subtreeWithAllDeepest(root->right);
        else
            return subtreeWithAllDeepest(root->left);
    }
};
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
    int sum(TreeNode* root,int sm){
        sm=sm*2+root->val;
        if(!root->right && !root->left)
            return sm;
        int s=0;
        if(root->left)
            s+=sum(root->left,sm);
        if(root->right)
            s+=sum(root->right,sm);
        return s;
    }
    int sumRootToLeaf(TreeNode* root) {
        return sum(root,0);
    }
};
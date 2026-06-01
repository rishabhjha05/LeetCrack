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
    int sol(TreeNode* root,char ch){
        if(!root)
            return 0;
        else if(!root->left && !root->right && ch=='L' )
            return root->val;
        else if(!root->left && !root->right)
            return 0;
        int sum=0;
        sum+=sol(root->left,'L');
        sum+=sol(root->right,'R');
        return sum;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        return sol(root,'R');
    }
};
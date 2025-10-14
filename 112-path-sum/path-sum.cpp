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
    bool helper(TreeNode* root,int sum,int targetSum)
    {
        if(root==NULL)
            return false;
        sum+=root->val;
        if(root->left==NULL && root->right==NULL)
            return sum==targetSum;
        if(helper(root->left,sum,targetSum) || helper(root->right,sum,targetSum))
            return true;
        return false;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL)
            return 0;
        int sum=0;
        return helper(root,sum,targetSum);
    }
};
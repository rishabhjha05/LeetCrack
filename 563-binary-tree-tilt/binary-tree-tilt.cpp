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
    int ans(TreeNode* root,int& s){
        if(!root)
            return 0;
        int l=ans(root->left,s);
        int r=ans(root->right,s);
        s+=abs(l-r);
        return l+r+root->val;
    }
    int findTilt(TreeNode* root) {
        int a=0;
        int sum=ans(root,a);
        return a;
    }
};
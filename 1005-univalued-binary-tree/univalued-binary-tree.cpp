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
    bool check(TreeNode* root,int val){
        if(!root)
            return true;
        else if(root->val!=val)
            return 0;
        return (check(root->left,val)&&check(root->right,val));
    }
    bool isUnivalTree(TreeNode* root) {
        int val=root->val;
        return check(root,val);
    }
};
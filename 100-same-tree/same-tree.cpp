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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==q && p==NULL)
            return true;
        else if(p==NULL || q==NULL)
            return false;
        if(p->val!=q->val)
            return false;
        bool left,right;
        left=isSameTree(p->left,q->left);
        right=isSameTree(p->right,q->right);
        if(left==right && left==true)
            return true;
        return false;
    }
};
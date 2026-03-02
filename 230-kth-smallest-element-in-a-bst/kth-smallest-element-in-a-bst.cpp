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
    void fill(TreeNode* root,vector<int> &ele){
        if(!root)
            return;
        fill(root->left,ele);
        ele.push_back(root->val);
        fill(root->right,ele);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> elements;
        fill(root,elements);
        return elements[k-1];
    }
};
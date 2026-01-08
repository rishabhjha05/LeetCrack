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
    int size(TreeNode* root){
        if(!root)
            return 0;
        return 1+max(size(root->left),size(root->right));
    }
    void find(TreeNode* root,vector<long long>& sum,int level){
        if(!root)
            return;
        sum[level]+=root->val;
        find(root->left,sum,level+1);
        find(root->right,sum,level+1);
    }
    long long kthLargestLevelSum(TreeNode* root, int k) {
        int n=size(root);
        vector<long long> sum(n);
        find(root,sum,0);
        if(k>n)
            return -1;
        sort(sum.begin(),sum.end());
        return 
            sum[n-k];
    }
};
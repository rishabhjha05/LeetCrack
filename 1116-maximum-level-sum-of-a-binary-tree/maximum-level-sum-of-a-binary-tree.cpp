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
    int level(TreeNode* root,int l){
        if(!root)
            return l;
        return max(level(root->left,l+1),level(root->right,l+1));
    }
    void fill(TreeNode* root,int l,vector<int>& lsum){
        if(!root)
            return;
        lsum[l]+=root->val;
        fill(root->left,l+1,lsum);
        fill(root->right,l+1,lsum);
    }
    int maxLevelSum(TreeNode* root) {
        int n=level(root,0),mx=INT_MIN,mxIdx=-1;
        vector<int> lsum(n,0);
        fill(root,0,lsum);
        for(int i=0;i<n;i++){
            if(mx<lsum[i])
                mx=lsum[i],mxIdx=i;
        }
        return mxIdx+1;
    }
};
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
    void getLev(TreeNode* root,int curr,int lev,vector<int>& vec){
        if(root==NULL)
            return;
        if(curr<lev){
            getLev(root->left,curr+1,lev,vec);
            getLev(root->right,curr+1,lev,vec);
        }
        else if(curr==lev)
            vec.push_back(root->val);
        return;
    }
    int size(TreeNode* root)
    {
        if(root==0)
            return 0;
        return 1+max(size(root->left),size(root->right));
    }
    void travers(TreeNode* root,int idx,vector<vector<int>>& ans){
        if(root==NULL)
            return;
        ans[idx].push_back(root->val);
        travers(root->left,idx+1,ans);
        travers(root->right,idx+1,ans);
        return;
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        int n=size(root);
        vector<vector<int>> ans(n);
        travers(root,0,ans);
        return ans;
    }
};
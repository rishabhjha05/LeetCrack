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
    int size(TreeNode* root)
    {
        if(root==0)
            return 0;
        return 1+max(size(root->left),size(root->right));
    }
    void travers(TreeNode* root,int idx,vector<vector<int>>& ans){
        if(root==NULL){
            ans[idx].push_back(-101);
            return;
        }
        ans[idx].push_back(root->val);
        travers(root->left,idx+1,ans);
        travers(root->right,idx+1,ans);
        return;
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        int n=size(root);
        vector<vector<int>> ans(n+1);
        travers(root,0,ans);
        return ans;
    }
    bool isSymmetric(TreeNode* root) {
        vector<vector<int>> help=levelOrder(root);
        for(vector<int> vec: help){
            int i=0,j=vec.size()-1;
            while(i<=j){
                if(vec[i]!=vec[j])
                    return false;
                i++,j--;
            }
        }
        return true;
    }
};
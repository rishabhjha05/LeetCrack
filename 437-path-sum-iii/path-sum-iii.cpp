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
    
    void sum(TreeNode* root, long long targetSum,int &count){
        if(root==NULL)
            return;
        targetSum-=root->val;
        if(targetSum==0)
            count++;
        sum(root->left,targetSum,count);
        sum(root->right,targetSum,count);
    }
    int pSum(TreeNode* root, int targetSum) {
        int count=0;
        if(root)
            sum(root,targetSum,count);
        return count;
    }
    int pathSum(TreeNode* root, int targetSum) {
        if(root==NULL)
            return 0;
        int ans=0;
        ans+=pSum(root,targetSum);
        ans+=pathSum(root->left,targetSum);
        ans+=pathSum(root->right,targetSum);
        return ans;
    }
};
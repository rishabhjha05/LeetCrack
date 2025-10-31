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
    TreeNode* convert(vector<int>& nums,int lo,int hi){
        if(lo>hi)
            return NULL;
        int mid=(hi+lo)/2;
        TreeNode* root =new TreeNode(nums[mid]);
        root->left=convert(nums,lo,mid-1);
        root->right=convert(nums,mid+1,hi);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int lo=0,hi=nums.size()-1;
        return convert(nums,lo,hi);
    }
};
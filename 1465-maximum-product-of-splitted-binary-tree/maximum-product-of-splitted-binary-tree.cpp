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
    int mod=1e9 +7;
    int sum(TreeNode* root){
        if(!root)
            return 0;
        return root->val+sum(root->left)+sum(root->right);
    }
    long long solve(TreeNode* root, long long Tsum, long long& mx) {
        if (!root) return 0;

        long long sub = root->val;
        sub += solve(root->left, Tsum, mx);
        sub += solve(root->right, Tsum, mx);

        mx = max(mx, sub * (Tsum - sub));
        return sub;
    }
    int maxProduct(TreeNode* root) {
        long long Tsum = sum(root),ans=0;
        Tsum=solve(root,Tsum,ans);
        return ans%mod;
    }
};
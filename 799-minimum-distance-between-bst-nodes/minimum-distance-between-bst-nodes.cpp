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
    void find(TreeNode* root,vector<int>& vec){
        if(!root)
            return;
        vec.push_back(root->val);
        find(root->left,vec);
        find(root->right,vec);
    }
    int minDiffInBST(TreeNode* root) {
        vector<int> vec;
        find(root,vec);
        sort(vec.begin(),vec.end());
        int mn=INT_MAX,n=vec.size();
        for(int i=1;i<n;i++)
            mn=min(mn,abs(vec[i]-vec[i-1]));
        return mn;
    }
};
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
    void traverse(TreeNode* root,unordered_map<int,int>& freq,int& mx){
        if(!root)
            return;
        freq[root->val]++;
        mx=max(mx,freq[root->val]);
        traverse(root->right,freq,mx);
        traverse(root->left,freq,mx);
    }
    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int> freq;
        int mx=INT_MIN;
        vector<int> ans;
        traverse(root,freq,mx);
        for(auto itr: freq)
            if(itr.second==mx)  
                ans.push_back(itr.first);
        return ans;
    }
};
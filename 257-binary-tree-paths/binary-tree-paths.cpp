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
    void sol(TreeNode *root,string str,vector<string>& ans){
        if(root==NULL)
            return;
        else if (root->left==root->right && root->left==NULL)
        {
            str+=to_string(root->val);
            ans.push_back(str);
            return;
        }
        str+=to_string(root->val);
        str+="->";
        sol(root->left,str,ans);
        sol(root->right,str,ans);
        return;
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        sol(root,"",ans);
        return ans;
    }
};
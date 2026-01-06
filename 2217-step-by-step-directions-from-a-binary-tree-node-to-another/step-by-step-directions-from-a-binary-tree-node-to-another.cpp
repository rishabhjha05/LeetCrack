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
string dfs(TreeNode* node, int target, string& path) {
    if (!node) {
        return "";
    }

    if (node->val == target) {
        return path;
    }

    path.push_back('L');
    string res = dfs(node->left, target, path);
    if (!res.empty()) return res;

    path.pop_back();
    path.push_back('R');
    res = dfs(node->right, target, path);
    if (!res.empty()) return res;
    path.pop_back();
    return "";
}

    string getDirections(TreeNode* root, int st, int en) {
        string ans="",start="",end="";
        dfs(root,st,start);
        dfs(root,en,end);
        int i=0,n=start.size(),m=end.size(),j;
        while(i<n && i<m && start[i]==end[i])
            i++;
        j=i;
        while(i<n)
            ans+="U",i++;
        while(j<m)
            ans+=end[j++];
        return ans;
    }
};
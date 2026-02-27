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
    void flatten(TreeNode* root) {
        stack<TreeNode*> st;
        if(root)
            st.push(root);
        vector<int> preO;
        while(!st.empty()){
            TreeNode* node=st.top();
            st.pop();
            preO.push_back(node->val);
            if(node->right)
                st.push(node->right);
            if(node->left)
                st.push(node->left);
        }
        TreeNode* temp=root;
        int n=preO.size();
        for(int i=1;i<n;i++){
            TreeNode* node=new TreeNode(preO[i]);
            temp->right=node;
            temp->left=NULL;
            temp=temp->right;
        }
    }
};
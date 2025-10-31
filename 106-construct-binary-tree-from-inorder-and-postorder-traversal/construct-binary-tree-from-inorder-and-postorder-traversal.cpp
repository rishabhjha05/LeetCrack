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
    
    TreeNode* build(vector<int>& post,int postlo,int posthi, vector<int>& in,int inlo,int inhi){
        if(postlo>posthi || inlo>inhi)
            return NULL;
        else if(postlo==posthi || inlo==inhi)
            return new TreeNode(post[posthi]);
        TreeNode* root=new TreeNode(post[posthi]);
        int i=inlo;
        while(i<=inhi)
        {
            if(in[i]==post[posthi])
                break;
            i++;
        }
        int leftCount=i-inlo,rightCount=inhi-i+1;
        root->left=build(post,postlo,postlo+leftCount-1,in,inlo,i-1);
        root->right=build(post,postlo+leftCount,posthi-1,in,i+1,inhi);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n=inorder.size();
        return build(postorder,0,n-1,inorder,0,n-1);
    }
};
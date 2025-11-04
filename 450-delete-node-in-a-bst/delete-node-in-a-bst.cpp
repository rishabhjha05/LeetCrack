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
    int predecessor(TreeNode* root){
        TreeNode* temp=root;
        if(temp->left==NULL)
            return temp->val;
        else
        {
            temp=temp->left;
            while(temp->right!=NULL)
                temp=temp->right;
            return temp->val;
        }
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL)  
            return NULL;
        if(root->val==key){
            if(root->right==NULL && root->left==NULL)
                return NULL;
            else if(root->right==NULL )
                return root->left;
            else if(root->left==NULL )
                return root->right;
            else{
                int pred=predecessor(root);
                cout<<pred<<endl;
                root->val=pred;
                root->left=deleteNode(root->left,pred);
                return root;
            }
        }
        else if(key<root->val)
            root->left=deleteNode(root->left,key);
        else
            root->right=deleteNode(root->right,key);
        return root;
    }
};
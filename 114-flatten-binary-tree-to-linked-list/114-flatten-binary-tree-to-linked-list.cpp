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
     vector<int>n;
    void preorder(TreeNode *root)
    { 
        if(root==NULL)
            return;
        n.push_back(root->val);
        preorder(root->left);
        preorder(root->right);
    }
    void flatten(TreeNode* root) {
       if (root==NULL)
           return;
        preorder(root);
        root->val=n[0];
        root->left=NULL;
        root->right=NULL;
       for(int i=1;i<n.size();++i)
       {
           TreeNode *temp=new TreeNode();
           temp->val=n[i];
           temp->left=NULL;
           temp->right=NULL;
           root->right=temp;
           root=temp;
       }
        
    }
};
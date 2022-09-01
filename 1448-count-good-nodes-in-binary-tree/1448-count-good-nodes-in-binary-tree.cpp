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
    int good=0;
    void preOrder(TreeNode* root,int m)
    {
        if(root==NULL)
            return;
        if(root->val>=m)
        {
            good++;
            m=root->val;
        }
        preOrder(root->left,m);
        preOrder(root->right,m);
        
    }
    int goodNodes(TreeNode* root) {
       
        preOrder(root,root->val);
        return good;
        
    }
};
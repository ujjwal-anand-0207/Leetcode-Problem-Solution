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
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
            return true;
        queue<TreeNode*>level;
        TreeNode *r1=root->left,*r2=root->right;
        level.push(r1);
        level.push(r2);        
        while(!level.empty())
        {
            r1=level.front();
            level.pop();
            r2=level.front();
            level.pop();
            if(r1==NULL&&r2==NULL)
                continue ;
            if(r1==NULL ||r2==NULL)
                return false;
            if(r1->val!=r2->val)
                return false;
            level.push(r1->left);
            level.push(r2->right);
            level.push(r1->right);
            level.push(r2->left);
        }
        return true;
    }
};
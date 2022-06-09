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
    vector<vector<int>> levelOrder(TreeNode* root) {
       vector<vector<int>>ans;
        queue<TreeNode*> level;
        TreeNode t(-2000);
        vector<int>cur;
        if(root==NULL)
            return ans;
        level.push(root);
        level.push(&t);
        while(!level.empty())
        {
            TreeNode *currnode=level.front();
            level.pop();
            cur.push_back(currnode->val);
            if(currnode->left!=NULL)
                level.push(currnode->left);
            if(currnode->right!=NULL)
                level.push(currnode->right);
            if(!level.empty())
            { TreeNode *x=level.front();
              int y=x->val;
              if( y==-2000)
             {
                ans.push_back(cur);
                cur.clear();
                level.pop();
                level.push(&t);
             }
            }
        }
             
        return ans;
    }
};
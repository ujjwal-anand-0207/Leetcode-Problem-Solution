class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        if(root!=NULL)
        {
            vector<int>c=inorderTraversal(root->left);
            v.insert(v.end(),c.begin(),c.end());
            v.push_back(root->val);
            c=inorderTraversal(root->right);
            v.insert(v.end(),c.begin(),c.end());
            
        }
        return v;
    }
};
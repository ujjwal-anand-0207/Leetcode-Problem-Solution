class Solution {
public:
    vector<int>v;
    void ino(TreeNode* root)
    {
        if(root==NULL)
            return;
        ino(root->left);
        v.push_back(root->val);
        ino(root->right);          
    }
    
    bool isValidBST(TreeNode* root) {
        ino(root);
        for(int i=0;i<v.size()-1;++i)
        {
            if(v[i]>=v[i+1])
                return false;
        }
        return true;
    }
};
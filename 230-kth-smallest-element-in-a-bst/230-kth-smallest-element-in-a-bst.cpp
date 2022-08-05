class Solution {
public:
    int i=1;
    int x,ans;
    void dfs(TreeNode* root) {
        if(!root){
            return;
        }
        
        dfs(root->left);
        if (i > x) {
            return;
        }
        else if (i == x) {
            ans = root->val;
            i++;
            return;
        }
        i++;
        dfs(root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        x = k;
        dfs(root);
        return ans;
    }
};
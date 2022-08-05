class Solution {
public:
    string pathp, pathq, temp;
    void findPath(TreeNode* root, TreeNode* target, string s){
        if(!root) return;
        if(root == target) {
            temp = s;
            return;
        }
        findPath(root->left, target, s + 'l');
        findPath(root->right, target, s + 'r');
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        string s = "";
        findPath(root, p, s);
        pathp = temp;
        s = "";
        findPath(root, q, s);
        pathq = temp;
        int i = 0;
        for(i = 0; pathp[i] == pathq[i]; i++);
        for(int j = 0; j < i; j++)
            if(pathp[j] == 'l') root = root->left;
            else root = root->right;
        return root;
    }
};
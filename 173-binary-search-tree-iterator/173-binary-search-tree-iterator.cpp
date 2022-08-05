class BSTIterator {
public:
    stack<TreeNode*> st;
    BSTIterator(TreeNode* root) {
        push(root);
    }
    
    int next() {
        TreeNode* node = st.top();
        st.pop();
        push(node->right);
        return node->val;
    }
    
    bool hasNext() {
        return !st.empty();
    }
    
    void push(TreeNode* root){
        while(root){
            st.push(root);
            root = root->left;
        }
    }
};


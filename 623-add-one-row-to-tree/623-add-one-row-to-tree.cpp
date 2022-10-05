class Solution {
private:
    TreeNode* solve(TreeNode* root, int val, int depth){
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        int d = 1;
        while(d<depth-1 && !q.empty()){
            TreeNode* temp = q.front();
            q.pop();        
            if(temp == NULL){
                if(!q.empty()){
                    q.push(NULL);
                }
                d++;
            }
            else{
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                } 
            }            
        }
        
        // while(!q.empty()){
        //     TreeNode* temp = q.front();
        //     q.pop();
        //     cout<<temp->val<<" ";
        // }
        while(!q.empty()){
                TreeNode* temp = q.front();
                q.pop();
                if(temp==NULL){
                    break;
                }
                TreeNode* tempLeft = temp->left;
                TreeNode* tempRight = temp->right;
                
                TreeNode* newLeft = new TreeNode(val);
                TreeNode* newRight = new TreeNode(val);
                
                temp->left = newLeft;
                newLeft->left = tempLeft;
                
                
                temp->right = newRight;
                newRight->right = tempRight;             
            }
        
        return root;
    }
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth == 1){
            TreeNode* newRoot = new TreeNode(val);
            newRoot->left = root;
            root = newRoot;
            return root;
        }
        
        root = solve(root, val, depth);
        return root;
    }
};
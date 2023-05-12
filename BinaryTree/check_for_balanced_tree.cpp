//naive solution
bool isbalanced(Node* root){
    if(root == NULL) return true;
    int lh = height(root->left);
    int rh = height(root->right);
    return (abs(lh-rh) <= 1 && isbalanced(root->left) && isbalanced(root->right));
}


//efficient solution
int isbalanced(node* root){
    if(root==NULL) return 0;
    int lh = isbalanced(root->left);
    if(lh == -1) return -1;
    int rh = isbalanced(root->right);
    if(rh == -1) return -1;
    if(abs(lh-rh) > 1)
    return -1;
    return max(lh,rh)+1;
}

//other solution
class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int checkbalance(Node* root){
         if(!root->left and !root->right) {
            return 1;
    }
    int lh=0,rh=0;
    if(root->left){
        lh=checkbalance(root->left);
        if(lh==-1){
            return -1;
        }
    }
    if(root->right){
        rh=checkbalance(root->right);
        if(rh==-1){
            return -1;
        }
    }
    if(abs(lh-rh)>1){
        return -1;
    }
    return max(lh,rh) + 1;
    }
    bool isBalanced(Node *root)
    {
        //  Your Code here
       int ans = checkbalance(root);
       if(ans == -1){
           return 0;
       }
       return 1;
        
    }
};
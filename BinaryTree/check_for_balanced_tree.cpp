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
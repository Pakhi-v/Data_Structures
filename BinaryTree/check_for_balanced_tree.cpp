//naive solution
bool isbalanced(Node* root){
    if(root == NULL) return true;
    int lh = height(root->left);
    int rh = height(root->right);
    return (abs(lh-rh) <= 1 && isbalanced(root->left) && isbalanced(root->right));
}


//efficient solution

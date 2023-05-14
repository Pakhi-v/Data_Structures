void mirror(Node* root){
    if(root == NULL){
        return ;
    }
    mirror(root->right);
    mirror(root->left);
    swap(root->left, root->right);
}
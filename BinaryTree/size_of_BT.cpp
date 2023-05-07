int getsize(node * root){
    if(root == NULL)
    return 0;
    else
    return 1+getsize(root -> left) + getsize(root->right);
}
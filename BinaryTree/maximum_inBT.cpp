//to get the maximum node in given binary tree
int getmax(node* root){
    if(root == NULL)
    return int_min;
    else
    return max(root->key, max(getmax(root->left),getmax(root->right)));
}
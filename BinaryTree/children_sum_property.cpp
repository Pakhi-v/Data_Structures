bool isSum(Node* root)
{
    if(root == NULL) return true;
    if(root->left == NULL && root->right == NULL)
    return true;
    int sum=0;
    if(root->left != NULL)
    sum+ = root->left->key;
    if(root->right != NULL)
    sum+ = root->right->key;

    return(root->key == sum && isSum(root->left) && isSum(root->right));
}
Node* lca(Node* root ,int n1 ,int n2 ){
    if(root == NULL)
    return NULL;

    if(root->data==n1 || root->data==n2)
    return root;

    Node* leftnode = lca(root->left,n1,n2);
    Node* rightnode = lca(root->right,n1,n2);

    if(leftnode!=NULL && rightnode!=NULL){
        return root;
    }
    else if(leftnode==NULL && rightnode!=NULL){
        return rightnode;
    }
    else return leftnode;
}
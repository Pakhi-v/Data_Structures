//Make binary tree from Linked List
TreeNode* build(vector<int>&v, int n, int i){
    if(i>=n)
    return NULL;

    TreeNode* node = new TreeNode(v[i]);
    node->left = build(v,n,(2*i) + 1 );
    node->right = build(v,n,(2*i) + 2 );
    return node;
}

void convert(Node* head, TreeNode *&root){
    vector<int> v;
    auto temp = head;
    while(temp){
        v.push_back(temp->data);
        temp=temp->next;
    }
int n = v.size();
root=build(v.n,0);
}

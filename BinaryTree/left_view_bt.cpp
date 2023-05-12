//method 1 : recursive(Pre-order traversal)
int maxlevel = 0;
void printleft(node *root, int level){
    if(root == NULL) return;
    if(maxlevel < level){
        cout<<(root -> key)<<" ";
        maxlevel = level;
    }
    printleft(root->left, level+1);
    printleft(root->right,level + 1);
}
void printleftview(Node*root){
    printleft(root,1);
}

//method 2 : iterative solution using queues
void printleft(Node* root){
    if(root == NULL) return;
    queue <node*> q;
    q.push(root);
    while(q.empty() == false){
        int count = q.size();
        for(int i = 0;i <count ; i++)
        {
            Node* curr = q.top();
            q.pop();
            if(i == 0)
            cout<<(curr->key)<<"";
            if(curr->left!=NULL)
            q.push(curr->left);
            if(curr->right != NULL)
            q.push(curr->right);
        }
    }
}


//method 3: level order traversal
vector<int> leftView(Node *root){
    vector<int> v;
    if(!root){
        return v;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        for(int i=0;i<n;i++){
            Node* temp = q.front();
            q.pop();
            if( i == 1)
            cout<<temp->data<< " ";

            // Add left node to queue
            if(temp->left != NULL)
            q.push(temp->left);

            // Add left node to queue
            if(temp->right != NULL)
            q.push(temp->right);
        }


    }
}
 vector<int> rightView(Node *root){
    vector<int> ans;
    if(root == NULL)
    return ans;
    queue<Node*> q;
    q.push(root);
    while(q.size()){
        int a=q.size();
        for(int i=0;i<a;i++){
            Node* curr= q.front();
            q.pop();
            if(i==0) // if level=0
            ans.push_back(curr->data);
            if(curr->left)
            q.push(curr->left);
            if(curr->right)
            q.push(curr->right);
        }
    }
    return ans;
 }
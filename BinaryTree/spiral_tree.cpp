vector<int> findSpiral(Node *root){
    vector<int> ans;
    if(root == NULL)
    return ans;
    int level = 0;
    queue<Node*> q;
    while(!q.empty()){
        int size = q.size();
        vector<int> t;
        for(int i=0;i<size;i++){
            Node* temp = q.front();
            q.pop();
            if(temp->right)
            q.push(temp->right);
            if(temp->left)
            q.push(temp->left);
            t.push_back(temp->data);
        }
        level ++;
        if(level & 1)
        reverse(t.begin(),t.end());

        for(auto it: t)
        ans.push_back(it);
    }
    return ans;
}
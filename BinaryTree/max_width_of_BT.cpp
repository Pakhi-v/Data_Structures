int getMaxWidth(Node* root) {

   if(root == NULL)
   return 0;

   int res=0;
   queue<Node *>q;
   q.push(root);
   while(q.empty() == false){
    int count = q.size();
    res = max(res,count);
    for(int i=0;i<count;i++){
        Node* curr=q.front();
        q.pop();
        if(curr->left!=NULL)
        q.push(curr->left);
        if(curr-.right!=NULL)
        q.push(curr->right);
    }
    return res;
   } 

}
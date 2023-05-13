//The width of binary tree is the number of vertical paths in the binary tree

void inorder(Node*root  , int hd , unordered_set<int>& temp){
        if(root!=NULL){
        inorder(root->left ,hd -1 , temp);
        temp.insert(hd);
        inorder(root->right , hd+1 , temp);
        
    }
    }
    
    
int verticalWidth(Node* root)
{
    // Code here
    unordered_set<int> temp;
    temp.clear();
    inorder(root , 0 , temp);
    return temp.size();
}


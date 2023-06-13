//Delete operation in Trie
//i is initally 0
TrieNode* delkey(TrieNode* root, int i, string &key){
    if(root == NULL)
    return NULL;
    if(i == key.length())
    root->isEnd = false;
    if(isEmpty(root) == true)
    {
        delete(root);
        root=NULL;
        return root;
    }
    //recursively call to delete a node
    int index = key[i] -'a';
    root->child[index] = delkey(root->child[index],i+1,key);
    if(isEmpty(root) && root->isEnd == false){
        delete(root);
        root=NULL;
    }
    return root;
    bool isEmpty(TrieNode* root){
        for(int i=0;i<26;i++)
        if(root->child[index]!=NULL)
        return false;
        return true;
    }
}
//Program represents basic search operation used in Trie
TrieNode* root;
bool search(String &key){
    TrieNode* curr = root;
    for(int i=0;i<key.lenght();i++){
        int index = key[i] - 'a';
        if(curr->child[index] == NULL)
        return false;
        curr=curr->child[index];
    }
    return curr->isEnd;
}
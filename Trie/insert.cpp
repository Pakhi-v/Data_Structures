//Insert operation used in Trie
TrieNode* root;
void insert(string &key){
    TrieNode* curr = root;
    for(int i=0;i<key.length();i++){
        int index = key[i] - 'a';
        if(curr->child[index] == NULL)
        curr->child[index] = new TrieNode();
        curr= curr->child[index];
    }
    curr->isEnd = true;
}
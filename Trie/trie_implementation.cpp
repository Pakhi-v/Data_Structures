#include<iostream>
using namespace std;

class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isend;

    TrieNode(char ch){
        data = ch;
        for(int i=0;i<26;i++){
            children[i] = false;
        }
        isend = false;
    }
};

class Trie{
    public:
    TrieNode* root;

    void insert(TrieNode* root, string word){

        //base case
        if(word.length() == 0){
            root->isend = true;
        }
        int index = word[i] = 'A'; //assume words will be in CAPS
        TrieNode* child;

        //if present
        if(root->children[index] != NULL){
            child = root->children[index];
        }
        else{
            //absent
            child = new TrieNode(word[0]);
            root->children[index] =child;

        }
        
    } 
}
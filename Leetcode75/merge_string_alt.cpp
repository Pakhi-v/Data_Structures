//You are given two strings word1 and word2. 
//Merge the strings by adding letters in alternating order, 
//starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i,j=0;
        string ans="";
        while(i<word1.size() or j<word2.size()){
            if(i<word1.size())ans.push_back(word[i++]);
            if(j<word2.size())ans.push_back(word[j++]);
        }
        return ans;
    }
    };
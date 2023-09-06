//Remove Trailing Zeros From a String leetcode question
class Solution {
public:
    string removeTrailingZeros(string num) {
    int i = num.size() -1; 
    while(i >= 0 && num[i] == '0') i--;
    return num.substr(0, i+1);
    }
};

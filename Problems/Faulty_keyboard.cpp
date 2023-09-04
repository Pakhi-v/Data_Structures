//Faculty keyboard leetcode question
class Solution {
public:
    string finalString(string s) {
    string a, b;
    for (char ch : s)
        if (ch == 'i')
            swap(a, b);
        else
            a += ch;
    return string(rbegin(b), rend(b)) + a;
    }
};

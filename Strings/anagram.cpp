class Solution{
public:
bool isAnagram(string a, string b){
        
        // Your code here
        vector<char> v(26,0);
        for(auto ch : a)
        {
            v[ch - 'a']++;
        }
        
        for(auto ch : b)
        {
            v[ch - 'a']--;
        }
        
        for(int i = 0; i < 26; i++)
        {
            if(v[i] != 0)
            {
                return false;
            }
        }
        return true;
        
    }
    };
class Solution
{
  public:
    char firstRep (string s)
    {
        //code here.
        
        char ch;
        int freq[26]={0};
        for(int i=0;i<s.length();i++){
            freq[s[i]-'a']++;
        }
        for(int i=0;i<s.length();i++){
            if(freq[s[i]-'a']>1){
                ch=s[i];
               
                return ch;
            }
        }
       
        return '#';
    }
};
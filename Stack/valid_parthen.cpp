class Solution {
public:
    bool isValid(string s) {
         stack <char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='{' || s[i] == '['){
                st.push(s[i]);
            }
            
            else{
                if(!st.empty()){
                    if(s[i]==')'){
                        if(st.top()=='(')
                            st.pop();
                        else
                            return false;
                    }
                    if(s[i]=='}'){
                        if(st.top()=='{')
                            st.pop();
                        else
                            return false;
                    }
                    if(s[i]==']'){
                        if(st.top()=='[')
                            st.pop();
                        else
                            return false;
                    }
                }
                else{
                    return false;
                }
            }
            
        }
            
            
        if(st.empty())
            return true;
        
        return false;
        
    }
};

//another solution
class Solution
{   
    //Function to check if brackets are balanced or not.
    static boolean ispar(String x)
    {
        Stack<Character>st = new Stack<>();
        for(int i =0;i<x.length();i++){
            char s= x.charAt(i);
            if(s=='('||s=='['||s=='{')
            st.push(s);
            else{
                if(st.isEmpty())
                return false;
                char ch = st.pop(); 
                if((s==')' && ch=='(')||(s=='}' && ch=='{')||(s==']'&&ch=='['))                  continue;
                else
                return false;
                
            }
        }

     return st.isEmpty();
    }
}
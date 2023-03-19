class Solution{
public:	
	int isPalindrome(string s)
	{
	  string s1=s;
	  reverse(s.begin(),s.end());
	  if(s1==s)
	  return 1;
	  else
	  return 0;
	}
	

};
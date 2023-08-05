#include<bits/stdc++.h>
using namespace std;
int CheckPassword(char str[], int n){
    if(n < 0)
    return 0;
    int a = 0, cap = 0, num=0;
    if (str[0] - '0' >= 0 && str[0] - '0' <= 9)
    return 0;
    if (str[a] == ' ' || str[a] == '/')
	return 0;
    while(a<n){
        if(str[a] == ' ' || str[a] == '/')
        return 0;
        if(str[a] >= 65 && str[a] <= 90){
            cap++;
        }
        else if(str[a] - '0' >= 0 && str[a] - '0' <= 9)
            num++;
            a++;
    }
    return cap>0 && num>0;

}
int main(){
  string s;
  getline (cin, s);
  int len = s.size ();
  char *c = &s[0];
  cout << CheckPassword (c, len);
    return 0;
}
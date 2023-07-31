#include <bits/stdc++.h> 
string urlShortener(long long n) {
	if(n == 0) return "0";
	// Write your code here.
	string base62 = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string ans = "";
    while(n){
        ans.push_back(base62[n%62]);
        n /= 62;
    }
    reverse(ans.begin(),ans.end());
    return ansl
}
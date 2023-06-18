bool isPal(string &str){
	string rev = str;
	reverse(rev.begin(),rev.end());
	return(rev == str);
}

//another method
int begin = 0;
int end = str.length()  - 1;
while(begin < end){
	if(str[begin] != str[end])
	return false;
	begin ++;
	end -- ;
}
return false;
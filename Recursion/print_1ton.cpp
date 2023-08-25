void fun(vector<int> &ans, int i, int x){
    if(i>x){
        return;
    }
    ans.push_back(i);
    fun(ans,i+1,x);
}
vector<int> printNos(int x) {
    vector<int> ans;
    int i=1;
    fun(ans,i,x);
    return ans;
}

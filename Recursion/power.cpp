#include<iostream>
using namespace std;

int pow(int n){

    //base case
    if(n==0)
    return 1;

    //recursive relation
    int smallprob = pow(n-1);
    int bigprob = 2 * smallprob;
    return bigprob;
}
int main(){
    int n;
    cin>>n;
    int ans = pow(n);
    cout<<ans<<endl;
    
}
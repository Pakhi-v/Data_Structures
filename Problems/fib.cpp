//find nth fibonaci no
#include<iostream>
using namespace std;
int main(){
    int t1=1,t2=1;
    int n,t3;
    cin>>n;
    if(n==1 || n==2)
    cout<<"1";
    else{
        for(int i=0;i<n-1;i++){
            t3 = t1+t2;
            t1=t2;
            t2=t3;
        }
        cout<<t3;
    }
}
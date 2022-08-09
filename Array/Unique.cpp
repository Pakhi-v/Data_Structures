#include<iostream>
using namespace std;
int Unique(int *arr,int n){
    int result=0;
    for(int i=0;i<n;i++){
       result=arr[i]^result;
    }
    return result;
}
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   cout<<Unique(arr,n);
    return 0;
}
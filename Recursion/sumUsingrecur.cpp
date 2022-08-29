#include<iostream>
using namespace std;

int recursum(int n){
    if(n<1)
    return n;

    return n + recursum(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<recursum(n)<<endl;

}
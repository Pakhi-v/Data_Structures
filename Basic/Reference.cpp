//reference variables have same memory but different names
#include<iostream>
using namespace std;
int main(){
    int i = 5;
    //create a ref variable
    int &j = i;
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;
}
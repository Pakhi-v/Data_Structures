#include<iostream>
using namespace std;
int main(){
    //pointer to int is created, and poiting to some garbage address
    //int *p = 0;
    //cout<<*p<<endl; 
    //when you try to access null pointer you will get segmentation fault
    int i = 5;
    int *p = &i;
    cout<<p<<endl;
    cout<<*p<<endl;

}
#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    char ch[6]="abcde";

    cout<<arr<<endl;

    char *c = &ch[0];
    cout<<c<<endl; //print entire string

    char temp = 'z';
    char *p = &temp;
    cout<<p<<endl;

}
#include<iostream>
using namespace std;
int main(){
    int arr[10] = {2,5,6};

    cout<<"address of first memory block"<<arr<<endl; 
    cout<<"address of first memory block"<<&arr[0]<<endl; 

    cout<<*arr<<endl;
    cout<<*arr+1<<endl;
    cout<<*(arr + 1)<<endl;
    cout<<*(arr) + 1 <<endl;

    int i = 3;
    cout<< i[arr] <<endl;


}
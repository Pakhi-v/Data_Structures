//default arguments starts from rightmost always
#include<iostream>
using namespace std;

void print(int arr[], int n, int start = 0){  //to make start optional
    for(int i = start;i<n;i++){
        cout<<arr[i]<<endl;
    }

}


int main(){
    int arr[5]={1,4,7,8,9};
    int size = 5;
    print(arr,size);

}
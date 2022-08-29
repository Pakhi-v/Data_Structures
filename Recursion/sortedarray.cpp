#include<iostream>
using namespace std;

bool isSorted(int *arr, int size){
    //base class
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0] > arr[1])
    return false;
    else{
        bool remainpart = isSorted(arr + 1, size - 1);
        return remainpart;
    }
}

int main(){
    int arr[5]={2,4,9,9,9};
    int size = 5;

    bool ans = isSorted(arr,size);
    if(ans){
        cout<<"array is sorted"<<endl;
    }
}
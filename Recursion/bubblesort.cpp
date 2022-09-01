//bubble sort using recursion
#include<iostream>
using namespace std;

void sortarray(int *arr, int size){
    if(size==0 || size == 1){
        return;
    }
    for(int i=0;i<size-1;i++){
        if(arr[i]> arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    sortarray(arr,size-1);

}
int main(){

    int arr[5]={2,5,1,6,9};
    sortarray(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;

}
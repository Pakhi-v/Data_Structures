//using recursion perform quick sort
#include<iostream>
using namespace std;

int parition(int arr[],int s,int e){
    int pivot = arr[s];

    int count = 0;
    for(int i = s+1; i<=e; i++){
        if(arr[i] <= pivot){
            count++;
        }
    }

    //placing pivot at right
    int pivotIndex = s + count;
    swap(arr[pivotIndex],arr[s]);

    int i = s, j = e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i] < pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i < pivotIndex && j>pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quicksort(int arr[],int s,int e){
    //base case
    if(s>=e)
    return;

    //partition
    int p = parition(arr,s,e);

    //sort left part
    quicksort(arr,s,p-1);
    //sort right part
    quicksort(arr,p+1,e);

    
}

int main(){
    int arr[5] = {2,4,1,6,9};
    int n =5;

    quicksort(arr, 0, n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;


}
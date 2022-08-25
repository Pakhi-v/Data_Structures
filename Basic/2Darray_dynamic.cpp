//create 2d array dynamically
#include<iostream>
using namespace std;
int main(){


    int n;
    cin>>n;

    int **arr = new int*[n];
    for(int i=0;i<n;i++){      //creation of 2d array
        arr[i]= new int[n];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){ 
            cin>>arr[i][j];
        }
    }
    cout<<endl;

     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){ 
            cout<<arr[i][j]<<" ";
        } cout<<endl;
    }

    //releasing memory
    for(int i=0;i<n;i++){
        delete [] arr[i];
    }
    delete []arr;

}
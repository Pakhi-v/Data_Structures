#include<iostream>
using namespace std;

bool linearsearch(int arr[], int size, int k){
    if(size == 0)
    return false;

    if(arr[0] == k){
        return true;
    }
    else{
        bool remainpart = linearsearch(arr+1, size-1, k);
        return remainpart;
    }
}

int main(){
    int arr[5]={3,5,1,2,6};
    int size = 5;

    int key = 2;
    bool ans = linearsearch(arr, size, key);

    if(ans){
        cout<<"present"<<endl;
    }
    else{
        cout<<"absent"<<endl;
    }
}
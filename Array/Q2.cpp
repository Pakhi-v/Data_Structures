#include<iostream>
using namespace std;
void getMinMax(int arr[], int N){
    int max =arr[0], min=arr[0];
    for(int i=1;i<N;i++){
        if(max < arr[i])
        max = arr[i];
        if(min > arr[i])
        min = arr[i];
    
    }
    cout<<"Maximum Value ="<<max<<"\n";
    cout<<"Minimum Value ="<<min;
}
int main(){
    int N = 6;
    int arr[N]= {2,4,6,7,3,1};
    getMinMax(arr,N);
    return 0;
}
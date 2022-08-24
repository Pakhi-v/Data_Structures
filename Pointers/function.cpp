#include<iostream>
using namespace std;

void print(int *p){
    cout<<*p<<endl;
}

void update(int *p){
    p = p+1;
}

int getSum(int *arr, int n){
    cout<<endl<<"size:"<<sizeof(arr)<<endl;

    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){

   /* int value = 5;
    int *p = &value;
    //print(p);

    cout<<p<<endl;
    update(p); //before update and after remain same because only value can be updated
    */
   int arr[6]={1,2,3,4,5,6};
   cout<<"sum:"<<getSum(arr+3,3)<<endl;


}
#include<iostream>
using namespace std;

int main(){
    int y;
    cin>>y;
    if(y % 400 == 0){
        cout<<"leap year";
    
    else if(y % 100 == 0)
    cout<<"not a leap year";

    else if(y % 4 == 0)
    cout<<"leap year";

    else{
        cout<<"not";
    }
    }
}
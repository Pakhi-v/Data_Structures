#include<iostream>
using namespace std;

void print(int *p){
    cout<<*p<<endl;
}

void update(int *p){
    p = p+1;
}

int main(){

    int value = 5;
    int *p = &value;
    //print(p);

    cout<<p<<endl;
    update(p); //before update and after remain same because only value can be updated


}
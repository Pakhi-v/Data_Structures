#include<iostream>
using namespace std;

int score = 15; //global variable

void a(int i){
    cout<<score<<"in a"<<endl;
    char ch = 'a';
    cout<<i<<endl;
}

void b(int &i){
    cout<<score<<"in b"<<endl;
    cout<<i<<endl;
}

int main(){
    cout<<score<<"in main"<<endl;
    int i = 5;
    a(i);
    b(i);

}

//only disadvantage of using global variable is that anyone can change its value
// for eg is we score++ after line 7 above, we get changed value
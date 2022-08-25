//reference variables have same memory but different names
#include<iostream>
using namespace std;

void update1(int &n){ //pass by ref.
    n++;
}

void update(int n){ //pass by value
    n++;
}

int main(){

    /*
    int i = 5;
    //create a ref variable
    int &j = i;
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;
    */

   int n = 5;
   cout<<"before"<<n<<endl;
   update1(n); 
   cout<<"after"<<n<<endl; 




}
#include<iostream>
using namespace std;
int main(){
    //pointer to int is created, and poiting to some garbage address
    //int *p = 0;
    //cout<<*p<<endl; 
    //when you try to access null pointer you will get segmentation fault
   /* int i = 5;
    int *p = &i;
    cout<<p<<endl;
    cout<<*p<<endl;
    */
   int num =5;
   int a =num;
   a++;
   cout<<num<<endl;

   int *p = &num;
   cout<<"before"<<num<<endl;
   (*p)++;
   cout<<"after"<<num<<endl;

   //copying a pointer
   int *q=p;
   cout<<p<<q<<endl;

   //imp concept
   int i = 3;
   int *t = &i;
   //cout<<(*t)++<<endl;
   *t = *t + 1;
   cout<<*t<<endl;



}
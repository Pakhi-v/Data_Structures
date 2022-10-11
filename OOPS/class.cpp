#include<iostream>
using namespace std;

class student{
    public:
    int health; //properties

    //use of getter and setter in class when we want to access private member outside the class
    int gethealth(){
        return health;
    }
    void sethealth(int h){
        health = h;
    }
};

int main(){

    student s1; //creation of object;

    //static allocation
    student a;

    //creating object dynamically;
    student *b  = new student;
    cout<<" health is : "<<(*b).gethealth()<<endl; //or b->gethealth()

    //cout<<"size:"<<sizeof(s1)<<endl;
    //s1.health = 90;
    cout<<"health is:"<<s1.health<<endl;

    //use setter
    s1.sethealth(90);


    cout<<"ram health is:"<<s1.gethealth()<<endl;

}
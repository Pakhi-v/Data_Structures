#include<iostream>
#include<stack>
using namespace std;

class Stack{
    public:
    int *arr;
    int top;
    int size;

    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void pus(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"stack overflow"<<endl;  
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }

    int peek(){
        if(top >= 0)
        return arr[top];
        else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
    }

    bool isempty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }

};

int main(){

    Stack st(5);
    st.push(11);
    st.push(44);
    st.push(2);

    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;



    stack <int> s; //creation of stack

    s.push(6);
    s.push(4);

    s.pop(); 

    cout<<"top element is:"<<s.top()<<endl;

    if(s.empty()){
        cout<<"stack is empty";

    }
    else
    cout<<"stack not empty";
}

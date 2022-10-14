class TwoStack{
    int *arr;
    int top1;
    int top2;
    int size;
public:

TwoStack(int s){
    this -> size = s;
    top1 = -1;
    top2 = s;
    arr = new int[s];
}
//push in stack 1
void push1(int num){
    if(top2 - top1 > 1){ //atleast a empty space present
        top1++;
        arr[top1] = num;
    }
    else{
        cout<<"stack overflow";
    }
}
//push in stack 2
void push1(int num){
    if(top2 - top1 > 1){ //atleast a empty space present
        top2--;
        arr[top2] = num;
    }
    else{
        cout<<"stack overflow";
    }
}
//pop from stack 1
int pop1(){
    if(top1 >= 0){
        int ans = arr[top1];
        top1--;
        return ans;
    }
    else{
        return -1;
    }
}
//pop from stack 2
int pop2(){
    if(top2 < size){
        int ans = arr[top1];
        top2++;
        return ans;
    }
    else{
        return -1;
    }
}



};
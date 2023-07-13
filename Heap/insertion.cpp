//insertion in heap
#include<iostream>
using namespace std;

class heap{
    public:
    int arr[100];
    int size=0;

    heap(){
        arr[0] = -1;
        size=0;
    }

    void insert(int val){
        size=size+1;  //increase size
        int index=size; //in this index to be putted
        arr[index] = val; //inserted value at index at end

        while(index > 1){
            int parent = index/2;

            if(arr[parent] < arr[index]){
                swap(arr[parent], arr[index]);
                index=parent;
            }
            else{
                return;
            }
        }
    }

    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
};
int main(){
    heap h;
    h.insert(5);
    h.insert(50);
    h.insert(12);
    h.insert(10);
    return 0;
}
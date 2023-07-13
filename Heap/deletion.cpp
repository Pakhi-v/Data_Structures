//deletion in heap
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

    void deletefromheap(){
        if(size == 0)
        return;

        //step 1: put last element into first index
        arr[1] = arr[size];

        //step 2: remove last element
        size--;

        //step 3: take root node to its correct position; here we considering max heap
        int i=1;
        while(i<size){
            int leftindex = 2*i;
            int rightindex = 2*i+1;

            if(leftindex < size && arr[i] < arr[leftindex]){
                swap(arr[i], arr[leftindex]);
                i = leftindex;
            }
            else if(rightindex<size && arr[i] < arr[rightindex]){
                swap(arr[i],arr[rightindex]);
                i= rightindex;
            }
            else{
                return;
            }
        }
    }
};
int main(){
    heap h;
    h.insert(5);
    h.insert(50);
    h.insert(12);
    h.insert(10);

    h.deletefromheap();
    h.print();
    return 0;
}
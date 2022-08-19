#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;

   /*vector<int> a(5,1); //5 defines size and 1 starting element*/


    cout<<"Capacity-->"<<v.capacity()<<endl; //total how many elements capacity it hold
    v.push_back(1);
    cout<<"Capacity-->"<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Capacity-->"<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Capacity-->"<<v.capacity()<<endl;

    cout<<"Size-->"<<v.size()<<endl; //size tells hoe many elements are stored
    cout<<"element at 2nd index"<<v.at(2)<<endl;

    cout<<"front"<<v.front()<<endl;
    cout<<"front"<<v.back()<<endl;

    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;





}
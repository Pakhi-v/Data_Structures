//set stores unique element, implementation is behine bst
//unorderded set is not in sorted order, also it is slow than set
#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);

    for(auto i : s){
        cout<<i<<endl;
    }cout<<endl;

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);

    for(auto i : s){
        cout<<i<<endl;
    }cout<<endl;

    cout<<endl;
    cout<<s.count(5)<<endl; //count tells if the element is present or not

    set<int>::iterator itr = s.find(5);

    for(auto it=itr; it!=s.end();it++){
        cout<<it<<" ";
    }cout<<endl;

    

}
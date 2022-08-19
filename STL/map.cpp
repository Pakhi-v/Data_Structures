//in map data is stored in form of key(unique)
#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int, string> m;

    m[1]="pakhi";  //here 1 is key and pakhi is value
    m[2]="vashishth";
    m[13]="ashutosh";

    m.insert( {5,"bheem"});

    for(auto i:m){
        cout<<i.first<<endl;
    }

    cout<<m.count(13)<<endl;

    m.erase(13);
    cout<<"after erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl<<endl;

    auto it = m.find(5);
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }


}
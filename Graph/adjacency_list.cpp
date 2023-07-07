#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

class graph{
     public:
     unordered_map<int, list<int>> adj;
     void addedge(int u,int v, bool direction){
        //direction = 0 ->undirected
        //direction = 1 ->directed
        adj[u].push_back(v);
        if(direction == 0){
            adj[v].push_back(u);
        }
     }
     void printAdjlist(){
        for(auto i: adj){
            cout<<i.first<< "-> ";
        for(auto j: i.second){
            cout<<j<< ", ";
        }
        cout<<endl;
        }
     }
};
int main(){
    int n; //no of nodes
    cin>> n;
    int m; //no of edges
    cin>>m;

    graph g;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g.addedge(u,v,0);
    }
    g.printAdjlist();

    return 0;
}
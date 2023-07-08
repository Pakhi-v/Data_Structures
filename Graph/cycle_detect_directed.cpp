//detect cycle in directed graph
#include<unordered_map>
#include<list>

bool checkcycledfs(int node,  unordered_map<int,bool> &visited, unordered_map<int,bool> &dfsvisited, unordered_map<int,list<int>> &adj){
    visited[node] = true;
    dfsvisited[node] = true;

    for(auto neig: adj[node]){
        if(!visited[neig]){
            bool cycledetected = checkcycledfs(neig, visited, dfsvisited, adj);
            if(cycledetected)
            return true;
        }
        else if(dfsvisited[neig]){
            return true;
        }
    }
    dfsvisited[node] = false;
    return false;
}
int detectcycle(int n, vector<pair<int,int>> &edges){
    //create adj list
    unordered_map<int,list<int>> adj;
    for(int i=0;i<n;i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
    }

    //call dfs for all components
    unordered_map<int,bool> visited;
    unordered_map<int,bool> dfsvisited;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            bool cyclefound = checkcycledfs(i,visited,dfsvisited,adj);
            if(cyclefound)
            return true;
        }
    }
    return false;
}
#include<unordered_map>
#include<queue>
#include<list>
bool iscyclebfs(int src, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adj ){
    unordered_map<int,int> parent;

    parent[src] = -1;
    visited[src] = 1;
    queue<int> q;
    q.push(src);
    while(!q.empty()){
        int front = q.front();
        q.pop();

        for(auto neig: adj[front]){
            if(visited[neig] == true && neig != parent[front]){
                return true;
            }
            else if(!visited[neig]){
                q.push(neig);
                visited[neig] = 1;
                parent[neig] = front;
            }
        }
    }
    return false;
}
string cycledet (vector<vector<int>> &edges, int n, int m) //we have list of edges, no of nodes and edges
{
    //create adj list
    unordered_map<int, list<int>> adj;
    for(int i=0;i<n;i++){
       int u = edges[i][0];
       int v = edges[i][1];

       adj[u].push_back(v);
       adj[v].push_back(u);
    }
    //to handle disconnected graph
    unordered_map<int, bool> visited;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            bool ans = isCyclebfs(i, visited, adj);
            if(ans == 1)
            return "YES";
        }
    }
    return "NO";
}


//uisng dfs
bool iscycledfs(int node, int parent,unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adj ){
    visited[node] = true;

    for(auto neig: adj[node]){
        if(!visited[neig]){
            bool cycledetect = iscycledfs(neig, node, visited, adj);
            if(cycledetect)
            return true;
        }
        else if(neig != parent){
            return true; //cycle present;
        }
    }
    return false;
}
string cycledet (vector<vector<int>> &edges, int n, int m) //we have list of edges, no of nodes and edges
{
    //create adj list
    unordered_map<int, list<int>> adj;
    for(int i=0;i<n;i++){
       int u = edges[i][0];
       int v = edges[i][1];

       adj[u].push_back(v);
       adj[v].push_back(u);
    }
    //to handle disconnected graph
    unordered_map<int, bool> visited;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            bool ans = isCycledfs(i,-1, visited, adj);
            if(ans == 1)
            return "YES";
        }
    }
    return "NO";
}
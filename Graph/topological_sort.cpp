#include<unordered_map>
#include<list>
#include<stack>
void toposort(int node, unordered_map<int,bool> &visited, stack<int> &st, unordered_map<int, list<int>> &adj){
    visited[node] =1;

    for(auto neig: adj[node]){
        if(!visited[neig])
           toposort(neig,visited,st,adj);
    }
}
vector<int> topologicalsort(vector<vector<int>> &edges, int v, int e){
    //create adj list
    unordered_map<int, list<int>> adj;
    for(int i=0;i<e;i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
    }

    //call dfs toplogical sort until function for all components
    unordered_map<int,bool> visited;
    stack<int> st;
    for(int i=0;i<v;i++){
        if(!visited[i])
        toposort(i,visited,s,adj);
    }
    vector<int> ans;

    while(!s.empty()){
        ans.push_back(st.top());
        s.pop();
    }
    return ans;
}
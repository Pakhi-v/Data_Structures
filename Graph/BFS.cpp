#include<iostream>
#include<queue>
#include<list>
#include<set>
void prepareadjlist(unordered_map<int, set<int> &adjlist, vector<pair<int,int>> &edges){
    for(int i=0;i<edges.size();i++){
        int u = edges[i].first;
        int v = edges[i].second;

        adjlist[u].insert(v);
        adjlist[v].insert(u);
    }
}

void bfs(unordered_map<int, list<int> &adjlist,unordered_map<int, bool> &visited, int node, vector<int> &ans){
    queue<int> q;
    q.push(node);
    visited[i] = 1;

    while(!q.empty()){
        int frontnode = q.front();
        q.pop();

        //store front node in ans
        ans.push_back(frontnode);
        //traverse all neighbours of front node
        for(auto i: adjlist[frontnode]){
            if(!visited[i]){
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}

vector<int> BFS(int vertex,vector<pair<int,int> edges){
    unordered_map<int, set<int> adjlist;
    vector<int> ans;
    unordered_map<int, bool> visited;

    prepareadjlist(adjlist,edges);

    //to check cas for disconnected graph ;traverse
    for(int i =0;i<n;i++){
        if(!visited[i]){
            bfs(adjlist,visited,ans,i);
        }
    }
return ans;

}
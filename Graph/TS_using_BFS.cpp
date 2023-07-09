//Topological sort using BFS
#include<unordered_map>
#include<list>
#include<queue>
vector<int> topologicalsort(vector<vector<int>> &edges, int v, int u){
    //create adj list
    unordered_map<int,list<int>> adj;
    for(int i=0;i<e;i++){
       int u = edges[i][0];
       int v = edges[i][1];

       adj[u].push_back(v);       
    }

    //find all indegress
    vector<int> indegree(v);
    for(auto i:adj){
        for(auto j: i.second){
            indegree[j]++;
        }
    }

    //o indegree walo ko push
    queue<int> q;
    for(int i=0;i<v;i++){
        if(indegree[i] == 0)
        q.push(i);
    }

    //do bfs
    vector<int> ans;
    while(!q.empty()){
        int front = q.front();
        q.pop();

        //ans store
        ans.push_back(front);

        //neighbour indegree
        for(auto neig: adj[front]){
            indegree[neig]--;
            if(indegree[neig] == 0)
            q.push(neig);
        }
    }
    return ans;
}
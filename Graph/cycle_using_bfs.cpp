#include<unordered_map>
#include<list>
#include<queue>
int detectcycle(int n, vector<pair<int,int>> &edges){
      unordered_map<int,list<int>> adj;
    for(int i=0;i<edges.size();i++){
       int u = edges[i].first - 1;
       int v = edges[i].second - 1;

       adj[u].push_back(v);       
    }

    //find all indegress
    vector<int> indegree(n);
    for(auto i:adj){
        for(auto j: i.second){
            indegree[j]++;
        }
    }

    //o indegree walo ko push
    queue<int> q;
    for(int i=0;i<n;i++){
        if(indegree[i] == 0)
        q.push(i);
    }

    //do bfs
    int count = 0;
    while(!q.empty()){
        int front = q.front();
        q.pop();

        //inc count
        count++;

        //neighbour indegree
        for(auto neig: adj[front]){
            indegree[neig]--;
            if(indegree[neig] == 0)
            q.push(neig);
        }
    }
    if(count == n)
    return false;
    else
    return true;
}
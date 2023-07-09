//Finding shortest path in unweighted graph using BFS
vector<int> shortestpath(vector<pair<int,int>> &edges, int n, int m, int s,int t){
    //create adj list
    unordered_map<int,int> adj;
    for(int i =0;i<edges;i++){
        int u = edges[i].first;
        int v = edges[i].second;

        adj[u].push_back(v);
        adj[v].push_back(u);  //bcoz undirected graph
    }

    //do bfs
    unordered_map<int, bool> visited;
    unorderes_map<int,int> parent;
    queue<int> q;
    q.push(s);
    parent[s] = -1;
    visited[i] = true;

    while(!q.empty()){
        int front = q.front();
        q.pop();

        for(auto i:adj[front]){
            if(!visited[i]) {
                visited[i] = true;
                parent[i] =front;
                q.push(i);
            }
        }
    }

    //prepare shortest path
    vector<int> ans;
    int currnode = t;
    ans.push_back(t);

    while(currnode != s){
        currnode = parent[currnode];
        ans.push_back(currnode);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
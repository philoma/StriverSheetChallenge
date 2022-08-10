void bfs(vector<int> adj[], vector<int>&ans, unordered_map<int, bool>&vis, int node){
      queue<int>q;
      q.push(node);
      vis[node]=1;
      
      while(!q.empty()){
          int front =q.front();
          q.pop();
          ans.push_back(front);
          
          for(auto i:adj[front]){
              if(!vis[i]){
                  q.push(i);
                  vis[i]=1;
              }
          }
      }
  }
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        unordered_map<int, bool>vis;
        vector<int>ans;
        int i=0;
        bfs(adj, ans, vis, i);
        return ans;
    }

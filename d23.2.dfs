void dfs(vector<int>adj[], unordered_map<int,bool>&vis, int node, vector<int>&ans){
      vis[node]=1;
      ans.push_back(node);
      for(auto i:adj[node]){
          if(!vis[i]){
              dfs(adj, vis, i, ans);
          }
      }
  }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        unordered_map<int, bool>vis;
        int node=0;
        vector<int>ans;
        dfs(adj, vis, node, ans);
        return ans;
    }

//KAHNS ALGO CAN ALSO BE USED(bfs)
#include<bits/stdc++.h>
bool dfs(unordered_map<int, list<int>>&adj,unordered_map<int,bool>&vis, unordered_map<int,bool>&visdfs, int node){
    vis[node]=1;
    visdfs[node]=1;
    for(auto neighbour:adj[node]){
        if(!vis[neighbour]){
            bool detected=dfs(adj,vis, visdfs, neighbour);
            if(detected) return 1;
        }else if(visdfs[neighbour]){
            return 1;
        }
    }
   visdfs[node]=0;
    return 0;
}
int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  // Write your code here.
    unordered_map<int, list<int>>adj;
    for(int i=0;i<edges.size();i++){
        int u=edges[i].first;
        int v=edges[i].second;
        
        adj[u].push_back(v);
        
        
    }
    unordered_map<int,bool>vis;
    unordered_map<int,bool>visdfs;
    for(int i=0;i<n;i++){
        if(!vis[i])
        {
            bool cyclefound=dfs(adj,vis,visdfs,i);
        if(cyclefound)
            return 1;
        }
         
    }
    return 0;
}

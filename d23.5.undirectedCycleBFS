#include<bits/stdc++.h>
//usinf BFS
bool iscyclicBFS(unordered_map<int, list<int>>&adj, unordered_map<int,bool>&vis, int node){
   
    unordered_map<int, int>parent;
    
    parent[node]=-1;
    queue<int>q;
    q.push(node);
    vis[node]=1;
    
    while(!q.empty()){
        
        int front=q.front();
        q.pop();
        //sab neighbours nikal liye:
        for(auto neighbour: adj[front]){
            if(vis[neighbour]==true && neighbour!=parent[front]){
                return true;
            }else if(!vis[neighbour]){
                q.push(neighbour);
                vis[neighbour]=1;
                parent[neighbour]=front;
            }
        }
        
        
        
    }
    return false;
}

//using DFS
bool iscyclicDFS(unordered_map<int, list<int>>&adj,unordered_map<int, bool>&vis,int parent,int node){
    vis[node]=1;
    for(auto neighbour:adj[node]){
        if(!vis[neighbour]){
            bool cyclic=iscyclicDFS(adj,vis,node, neighbour);
            if(cyclic==1)
                return 1;
        }
        else if(neighbour!=parent){
            //cycle present
            return 1;
        }
    }
    return 0;
}
string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    // Write your code here.
    unordered_map<int, list<int>>adj;
    for(int i=0;i<edges.size();i++){
        int u=edges[i][0];
        int v=edges[i][1];
        
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    unordered_map<int,bool>vis;
    //to hadndle disconnected component
    
    for(int i=0;i<n;i++){
        if(!vis[i]){
            int parent=-1;
           bool ans= iscyclicDFS(adj,vis, parent,i);
            if(ans==1)
                return "Yes";
        }
        
    }
    return "No";
        
}

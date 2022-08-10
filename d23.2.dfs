 ////Kahn's algorithm mei jiski indegree zero ho usko queue mei daalte jaao aur uske neighbours ki indegree mei -1 karte jao.
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    queue<int>q;
	    vector<int>indegree(V,0);
	    for(int i=0;i<V;i++){
	       for(auto j:adj[i]){
	           indegree[j]++;
	       }
	    }
	    for(int i=0;i<V;i++){
	        if(indegree[i]==0){
	            q.push(i);
	        }
	    }
	    vector<int>ans;
	    
	    //bfs
	    
	    while(!q.empty()){
	        int front=q.front();
	        q.pop();
	        ans.push_back(front);
	        
	        for(auto neighbour:adj[front]){
	            indegree[neighbour]--;
	            if(indegree[neighbour]==0){
	            q.push(neighbour);
	        }
	        }
	    }
	    
	    return ans;
	    
	    
	    
	}

//or-
// int dx[8]={0,0,1,-1,1,-1,1,-1};
// int dy[8]={1,-1,0,0,1,-1,-1,1};
// void dfs(int x,int y ,int** arr,int n,int m,vector<vector<int>>&vis){
//    if(x<0||y<0||x>=n||y>=m||arr[x][y]==0||vis[x][y]==1)
//        return;
//    vis[x][y]=1;
   
//    for(int k=0;k<8;k++){
//        dfs(x+dx[k],y+dy[k],arr,n,m,vis);
//    }
// }

void dfs(int **arr,vector<vector<bool>>&vis, int i, int j, int n, int m){
    if(i<0||i>=n||j<0||j>=m){
        return;
    }
    if(arr[i][j]!=1||vis[i][j]==1) return;
    vis[i][j]=1;
        dfs(arr, vis, i-1, j-1, n, m);
        dfs(arr, vis, i-1, j,n ,m);
        dfs(arr, vis, i-1, j+1, n, m);
        dfs(arr, vis, i, j-1,n,m);
        dfs(arr, vis, i+1, j+1,n,m);
        dfs(arr, vis, i, j+1,n,m);
        dfs(arr, vis, i+1, j-1,n,m);
        dfs(arr, vis, i+1, j,n,m);
    
    
    
}
int getTotalIslands(int** arr, int n, int m)
{
   // Write your code here.
    vector<vector<bool>>vis(n,vector<bool>(m,0));
    int count=0;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!vis[i][j]&&arr[i][j]==1){
                int node=arr[i][j];
                dfs(arr, vis,i, j,n,m);
                count++;
            }
        }
    }
    return count;
    
}

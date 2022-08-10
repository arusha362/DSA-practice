void dfs(vector<vector<int>> &B,int cur,vector<bool> &Visited){
    Visited[cur]= 1;
    for(int u:B[cur]){
        if(!Visited[u]){
            dfs(B,u,Visited);
        }
    }
    return;
}
int Solution::solve(int A, vector<vector<int> > &B) {
    vector<vector<int>> Adj(A);
    for(auto i:B){
        Adj[i[0]-1].push_back(i[1]-1);
        Adj[i[1]-1].push_back(i[0]-1);
    }
    vector<bool> Visited(A,0);
    int count=0;
    for(int i=0;i<A;++i){
        if(!Visited[i]){
            dfs(Adj,i,Visited);
            count++;
        }
    }
    return count;
}

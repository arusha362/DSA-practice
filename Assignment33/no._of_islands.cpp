class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int count =0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]!='0'){
                  count++;
                  dfs(grid,i,j,grid.size(),grid[i].size());
                }
            }
        }
        return count;
    }
    void dfs(vector<vector<char>>&grid,int i,int j,int m,int n)
    {   if(i==m || j==n || i<0 || j<0 || grid[i][j]=='0')
            return;
        grid[i][j]='0';
        dfs(grid,i-1,j,m,n);
        dfs(grid,i,j-1,m,n);
        dfs(grid,i,j+1,m,n);
        dfs(grid,i+1,j,m,n);
    
    }
};

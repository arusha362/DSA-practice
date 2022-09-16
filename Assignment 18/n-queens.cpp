class Solution {
public:
    vector<vector<string>>Ans;
    int n;
    bool CheckDia(vector<string>&s,int i,int j){
        for(auto a:{1,-1}){
            for(auto b:{1,-1}){
                int x=i+a,y=j+b;
                while(x>=0 && y>=0 && x<n && y<n){
                    if(s[x][y]=='Q') return 0;
                    x+=a;
                    y+=b;
                }
            }
        }
        return 1;
    }
    void help(vector<string>&s,int i,vector<bool>&Col){
        if(i==n) Ans.push_back(s);
        else{
            for(int j=0;j<n;j++){
                if(Col[j]==0 && CheckDia(s,i,j)){
                    Col[j]=1;
                    s[i][j]='Q';
                    help(s,i+1,Col);
                    Col[j]=0;
                    s[i][j]='.';
                }
            }
        }
    }
    vector<vector<string>> solveNQueens(int N) {
        n=N;
        string t="";
        for(int i=0;i<n;i++) t+=".";
        vector<string>s(n,t);
        vector<bool>Col(n);
        help(s,0,Col);
        return Ans;
    }
};

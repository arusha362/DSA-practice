vector<bool>A(10);
bool gotAns=0;
class Solution {
public:
    vector<bool> getValidValues(vector<vector<char>>&board, int i,int j){
        for(int k=1;k<10;k++) A[k]=1;
        for(int k=0;k<board[i].size();k++){
            if(board[i][k]!='.') A[board[i][k]-'0']=0;
        }
        for(int k=0;k<board.size();k++){
            if(board[k][j]!='.') A[board[k][j]-'0']=0;
        }
        int row_start=3*(i/3);
        int col_start=3*(j/3);
        for(i=row_start;i<row_start+3;i++){
            for(j=col_start;j<col_start+3;j++){
               if(board[i][j]!='.') A[board[i][j]-'0']=0;
            }
        }
        
        return A;
    }
    void help(vector<vector<char>>&board,int i,int j){
        if(j==9) {
            i++;
            j=0;
        }
        if(i==9 or gotAns){
            gotAns=1;
            return;
        }
        if(board[i][j]!='.') {
            help(board,i,j+1);
            return;
        }
        auto validValues=getValidValues(board,i,j);
        
        for(int k=1;k<10;k++){
            if(validValues[k]){
                board[i][j]='0'+k;
                help(board,i,j+1);
                if(gotAns) break;
                
                board[i][j]='.';
                
            }
        }
    }
    void solveSudoku(vector<vector<char>>& board) {
        gotAns=0;
        help(board,0,0);
        
    }
};

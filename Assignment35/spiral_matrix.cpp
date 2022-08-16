class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        vector<int> ans;
        int r_start=0,r_end=m-1,c_start=0,c_end=n-1;
        while(r_start<=r_end && c_start<=c_end){
            for(int i=c_start;r_start<=r_end && c_start<=c_end && i<=c_end;i++){
                ans.push_back(matrix[r_start][i]);
                
            }
            r_start++;
            for(int i=r_start;r_start<=r_end && c_start<=c_end && i<=r_end;i++){
                ans.push_back(matrix[i][c_end]);
                
            }
            c_end--;
            for(int i=c_end;r_start<=r_end && c_start<=c_end && i>=c_start;i--){
                ans.push_back(matrix[r_end][i]);
                
            }
            r_end--;
            for(int i=r_end;r_start<=r_end && c_start<=c_end && i>=r_start;i--){
                ans.push_back(matrix[i][c_start]);
                
            }
            c_start++;
        }
        return ans;
    }
};

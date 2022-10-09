class Solution {
public:
    int maxSideLength(vector<vector<int>>& mat, int threshold) {
        int m=mat.size(),n=mat[0].size();
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=1;j<n;j++){
                mat[i][j]=mat[i][j-1]+mat[i][j];
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int l=1,h=min(i+1,j+1);
                while(l<=h){
                    int mid=(l+h)/2;
                    int sum=0,k=j-(mid-1);
                    for(int t=i;t>i-mid;t--){
                        if(k-1>=0)
                        sum+=mat[t][j]-mat[t][k-1];
                    else
                        sum+=mat[t][j];
                    }
                    if(sum<=threshold){                    
                        ans=max(ans,mid);
                        l=mid+1;
                    }
                    else{
                        h=mid-1;
                    }
                }
            }
        }
        return ans;
    }
};

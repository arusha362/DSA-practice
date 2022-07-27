class Solution {
public:
    int mySqrt(int x) {
        long long int mid,ans=x;
        int low=0,high=x;
        if(x==0){
            return 0;
        }
        if(x==1){
            return 1;
        }
        while(low<high){
            mid = (low+high)/2;
            if(mid*mid==x){
                return mid;
            }
            else if(mid*mid>x){
                high=mid;
            }
            else if(mid*mid<x){
                low=mid+1;
                ans=mid;
            }
            
        }
        return ans;
        
    }
};

class Solution {
public:
    int arrangeCoins(int n) {
        long long int ans,mid;
        int low=0,high=n;
        if(n==1)
            return 1;
        while(low<high){
            mid=(low+high)/2;
            if(mid*(mid+1)/2<n){
                low=mid+1;
                ans=mid;
            }
            else if(mid*(mid+1)/2>n){
                high=mid;
            }
            else
                return mid;
        }
        return ans;
    }
};

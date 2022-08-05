class Solution {
public:
    int firstBadVersion(int n) {
        int high=INT_MAX;
        long long int low=1,mid;
        int ans=0;
        if(n==1)
            return 1;
        while(low<=high){
            mid=(low+high)/2;
            bool check=isBadVersion(mid);
            if(check==true){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};

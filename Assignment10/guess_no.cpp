class Solution {
public:
    int guessNumber(int n) {
        int low=0;
        long long int high=n;
        if(n==1)
            return 1;
        if(n==0)
            return 0;
        while(low<=high){
            long long int mid=(low+high)/2;
            int check= guess(mid);
            if(check==0)
                return mid;
            else if(check==-1)
                high=mid-1;
            else
                low=mid+1;
                
        }
        return -1;
    }
};

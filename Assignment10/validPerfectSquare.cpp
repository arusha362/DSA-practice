class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int mid;
        int low=0,high=num;
        if(num==1)
            return true;
        if(num==0)
            return false;
        while(low<high){
            mid=(low+high)/2;
            if(mid*mid==num)
                return true;
            else if(mid*mid<num)
                low=mid+1;
            else if(mid*mid>num)
                high=mid;
            
            
        }
        return false;
    }
};

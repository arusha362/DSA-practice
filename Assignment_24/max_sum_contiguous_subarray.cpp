int Solution::maxSubArray(const vector<int> &A) {
    int sum=0,maxi=INT_MIN;
        for(auto i:A){
            sum+=i;
            maxi=max(sum,maxi);
            if(sum<0) sum=0;
        }
        return maxi;
}

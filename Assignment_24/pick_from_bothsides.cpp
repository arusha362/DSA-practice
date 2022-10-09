int Solution::solve(vector<int> &A, int B) {
    int sum=0,max_sum=INT_MIN;
    for(int i=0;i<B;i++){
        sum+=A[i];
        max_sum=sum;
    }
    int k=A.size()-1;
    for(int j=B-1;j>=0;j--){
        sum+=A[k]-A[j];
        max_sum=max(max_sum,sum);
        k--;
    }
    return max_sum;
}

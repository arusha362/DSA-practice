int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int ans=0;
    for(int i=0;i<A.size()-1;i++){
        int a1=A[i],b1=B[i],a2=A[i+1],b2=B[i+1];
        int step_a=abs(a2-a1);
        int step_b=abs(b2-b1);
        ans+=max(step_a,step_b);
    }
    return ans;
}

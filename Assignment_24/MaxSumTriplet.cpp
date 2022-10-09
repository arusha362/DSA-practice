int Solution::solve(vector<int> &A) {
    int sum=0,n=A.size();
    vector<int> r(n);
    set<int> s;
    for(int i=n-1;i>=0;i--){
        if(i==n-1) r[i]=A[i];
        else{
            r[i]=max(A[i],r[i+1]);
        }
    }
    s.insert(A[0]);
    for(int i=1;i<n;i++){
        s.insert(A[i]);
        auto j=s.find(A[i]);
        if(j!=s.begin() && r[i]!=A[i]){
            sum=max(sum,(*--j)+A[i]+r[i]);
        }
    }
    return sum;
}

vector<int> Solution::solve(vector<int> &A) {
    vector<int> ans;
    for(int i=0;i<A.size();i++){
        int n=A[i]*A[i];
        ans.push_back(n);
    }
    sort(ans.begin(),ans.end());
    return ans;
}

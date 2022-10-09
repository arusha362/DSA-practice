int Solution::solve(vector<int> &A, int B) {
    int count=0;
    int i=0;
    int n=A.size();
    while(i<n){
        int right = min(i+B-1,n-1);
        int left = max(i-B+1,0);
        bool check = false;
        while(right>=left){
            if(A[right]==1){
                check = true;
                break;
            }
            right--;
        }
        if(!check) return -1;
        count++;
        i = right+B ;
    }
    return count;
}

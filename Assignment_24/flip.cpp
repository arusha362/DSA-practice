vector<int> Solution::flip(string A) {
    
    int n=A.size();
    vector<int> ans;
    vector<int> arr(n);
    bool flag = true;
    
    for(int i=0;i<A.size();i++){
        if(A[i]=='0'){
            arr[i]=1;
            flag = false;
        }
        else{
            arr[i]=-1;
        }
    }
    //if we already have max no.s of 1
    if(flag) return ans;
    
    //kadane's algo
    int sum=0;
    int max_sum=0;
    int start=0;
    int end=0;
    ans.resize(2);
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum>max_sum){
            max_sum = sum;
            end = i;
            ans[0]=(start+1);
            ans[1]=(end+1);
        }
        if(sum<0){
            sum = 0;
            start = i+1;
        }
    }
    return ans;
}

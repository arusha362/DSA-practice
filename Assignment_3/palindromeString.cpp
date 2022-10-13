int Solution::isPalindrome(string A) {
    string s;
    for(int i=0;i<A.size();i++){
        if(A[i]>='a' && A[i]<='z' || A[i]>='0' && A[i]<='9'){
            s+=A[i];
        }
        if(A[i]>='A' && A[i]<='Z'){
            s+=(A[i]+32);
        }
    }
    int k=s.size();
    for(int i=0;i<k/2;i++){
        if(s[i]!=s[k-i-1]){
            return 0;
        }
    }
    return 1;
}

string Solution::solve(string A) {
    string ans = "";
    int i = 0;
    while(i < A.size()){
        while(i<A.size() && A[i] == ' ') i++;
        if(i>=A.size()) break;
        int j = i + 1;
        while(j < A.size() && A[j]!=' ') j++;
        string w = A.substr(i, j-i);
        if(ans=="") ans=w;
        else ans = w + " " + ans;
        i = j + 1;
    }
    return ans;
}

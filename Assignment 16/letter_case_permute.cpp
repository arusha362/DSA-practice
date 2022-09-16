class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        vector<string>  ans;
        recur(ans,0,s);
        return ans;
    }
    void recur(vector<string>& ans,int i,string s){
        if(i==s.size()){
            ans.push_back(s);
            return ; 
        }
        recur(ans,i+1,s);
        if(isalpha(s[i])){
            if(s[i]<97){
                s[i]+=32;
            }else
                s[i]-=32;
            recur(ans,i+1,s);
        }
    }
};

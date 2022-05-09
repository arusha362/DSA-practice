class Solution {
public:
    bool isPalindrome(string s) {
        string x;
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z' || s[i]>='0' && s[i]<='9'){
                x+=s[i];
            }
            if(s[i]>='A' && s[i]<='Z'){
                x+=s[i]-'A'+'a';
            }
        }
        int y=x.size();
        for(int j=0;j<y/2;j++){
            if(x[j]!=x[y-j-1])
                return false;
        }
        return true;
        
    }
};

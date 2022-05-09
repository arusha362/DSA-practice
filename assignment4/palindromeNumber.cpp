class Solution {
public:
    bool isPalindrome(int x) {
        int a=x;
        long rev=0;
        while(a>0){
            int rem=a%10;
            rev=rem+(rev*10);
            a=a/10;
        }
        if(rev==x){
            return true;
        }
    return false;
        
    }
};

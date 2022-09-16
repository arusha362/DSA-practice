class Solution {
public:
    double myPow(double x, int n) {
        double p=1;
        long long k=n;
        if(k<0)
            k=-1*k;
        while(k){
            if(k%2 == 0){
                x*=x;
                k/=2;
            }
            else{
                p*=x;
                k-=1;
            }
        }
        if(n<0){
            p = double(1.0)/double(p);
        }
        return p;
    }
};

#define mod 1000000007
class Solution {
public:
    int countPairs(vector<int>& d) {
        unordered_map<int,int> mp;
        long long count=0;
        for(int i=0;i<d.size();i++){
            int p=1;
            for(int j=0;j<=22;j++){
                if(mp.find(p-d[i])!=mp.end()){
                    count=count+mp[p-d[i]];
                    count=count%mod;
                }
                p=p*2;
            }
            mp[d[i]]++;
        
        }
        return count;
    }
};

class Solution {
public:
    int splitArray(vector<int>& nums, int m) {
        int low=0,ans,high=0,mid;
        for(int i:nums){
            low=max(low,i);
            high+=i;
        }
        if(m==nums.size()) return low;
        while(low<=high){
            mid=low+(high-low)/2;
            if(bestSplit(mid,nums,m)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
    bool bestSplit(int sum, vector<int>& nums, int m){
        int splits=1,total=0;
        for(int k:nums){
            total+=k;
            if(total>sum){
                total=k;
                splits++;
            }
            if(splits>m) return false;
        }
        return true;
    }
};

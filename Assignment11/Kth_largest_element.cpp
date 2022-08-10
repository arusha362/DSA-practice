class Solution {
public:
    int countSmallerOrEqual(vector<int>& nums, int k){
        int count=0;
        for(int i:nums){
            if(i<=k) count++;
        }
        return count;
    }
    
    int findKthLargest(vector<int>& nums, int k) {
        //sort(nums.begin(),nums.end());
        int low=-10000,high=10000;
        k=nums.size()-k+1;
        int ans=low;
        while(low<=high){
            int mid=(low+high)/2;
            int count=countSmallerOrEqual(nums,mid);
            if(count<k){
                low=mid+1;
            }
            if(count>=k){
                ans=mid;
                high=mid-1;
            }  
        }
        return ans;
    }
};

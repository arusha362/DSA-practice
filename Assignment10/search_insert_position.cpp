class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int mid,ans;
        int low=0;
        long long int high=nums.size();
        while(low<high){
            mid=(low+high)/2;
            if(nums[mid]<target){
                low=mid+1;
                ans=mid+1;
            }
            else if(nums[mid]>target){
                high=mid;
            }
            
            else
                return mid;
        }
        return ans;
    }
};

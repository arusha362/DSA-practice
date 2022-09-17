class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=0,high=nums.size()-1,mid;
        
        if(high==0)return nums[0];
        
        else if(nums[low]!=nums[low+1]) return nums[low];
        
        else if(nums[high]!=nums[high-1]) return nums[high];
        
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1]){
                return nums[mid];
            }
            //in left, 1st occurence is at even and 2nd at odd
            //in right, 1st occurence is at odd & 2nd at even
            if(((mid%2)==0 && nums[mid]==nums[mid+1]) || ((mid%2)!=0 && nums[mid]==nums[mid-1])){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return nums[mid];
    }
};

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int mid,low=0,high=arr.size()-1;
        int ans=0;
        while(low<=high){
            mid=(low+high)/2;
            if(arr[mid]<arr[mid+1]){
                ans=mid+1;
                low=mid+1;
            }
            else if(arr[mid]<arr[mid-1]){
                ans=mid;
                high=mid-1;
            }
            else
                return mid;
        }
        return ans;
    }
};

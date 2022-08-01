class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> A;
        int mid,low=0;
        int high=nums.size();
        sort(nums.begin(),nums.end());
        while(low<high){
            mid=(low+high)/2;
            if(nums[mid]==target){
                A.push_back(mid);
                int l,r;
                for(int i=1;i<nums.size();i++)
                {
                    l=mid-i;
                    r=mid+i;
                    if(r<nums.size())
                    {
                        if(nums[r]==target)
                            A.push_back(r);
                    }

                    if(l>=0)
                    {
                        if(nums[l]==target)
                            A.push_back(l);
                    }
                }
                break;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else
                high=mid;
        }
        sort(A.begin(),A.end());
        return A;
    }
};

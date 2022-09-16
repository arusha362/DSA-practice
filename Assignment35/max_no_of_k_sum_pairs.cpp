class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int s=0,e=nums.size()-1,ans=0;
        sort(nums.begin(),nums.end());
        while(s<e)
        {
            if(nums[s]+nums[e]==k){
                ans++;
                s++;
                e--;
            }
            else if(nums[s]+nums[e]>k){
                e--;
            }
            else{
                s++;
            }
        }
        return ans;
    }
};

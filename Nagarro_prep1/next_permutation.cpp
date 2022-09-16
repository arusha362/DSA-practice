class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int a=-1;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                a=i;
                break;
            }
        }
        if(a==-1){
            sort(nums.begin(),nums.end());
            return ;
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]>nums[a]){
                int k=nums[i];
                nums[i]=nums[a];
                nums[a]=k;
                break;
            }
        }
        sort(nums.begin()+a+1,nums.end());
        return;
    }
};

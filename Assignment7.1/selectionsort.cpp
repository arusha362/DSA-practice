class Solution {
public:
    
    vector<int> sortArray(vector<int>& nums) {
        int min,j;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            min=i;
            for(j=i+1;j<n;j++){
                if(nums[min]>nums[j]){
                    min=j;
                }
            }
            if(min!=j){
                
               swap(nums[min],nums[i]);
            }
        }
        return nums;
    }
};

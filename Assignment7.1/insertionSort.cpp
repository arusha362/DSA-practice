class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        for(int i=1;i<n;i++){
            int a=nums[i];
            int j=i-1;
            while(j>=0 && nums[j]>a){
                nums[j+1]=nums[j];
                j--;
        
            }
            nums[j+1]=a;
        
            
        }
        return nums;
    }
};

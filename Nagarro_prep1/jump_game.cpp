class Solution {
public:
    bool canJump(vector<int>& nums) {
        int k=0;
        if(nums.size()==1){
                return true;
        }
        for(int i=0;i<nums.size();i++){
            if(k<i){
                return false;
             }
             k=max(k,i+nums[i]);
        }  
        return true;
    }
};

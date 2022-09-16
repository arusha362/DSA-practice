class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        recur(0,ans,nums);
        return ans;
    }
    void recur(int a,vector<vector<int>>&ans,vector<int>nums){
        if(a==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=a;i<nums.size();i++){
            if(i==a || nums[i]!=nums[a]){
                swap(nums[a],nums[i]);
                recur(a+1,ans,nums);
            }
        }
    }
};

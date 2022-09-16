class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
      vector<vector<int>> ans;
	    recur(nums, 0, ans);
	    return ans;
    }
	 void recur(vector<int> &nums, int start, vector<vector<int>> &ans){
		 if(start>=nums.size()) {
		     ans.push_back(nums);
		     return;
	     }
		 for(int i=start;i<nums.size();i++) {
		     swap(nums[start], nums[i]);
		     recur(nums,start + 1,ans);
		     swap(nums[start], nums[i]);
		 }
    }
};

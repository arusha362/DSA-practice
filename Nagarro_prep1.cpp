class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum_nums=0;
        int total_sum=n*(n+1)/2;
        for(int i=0;i<n;i++){
            sum_nums+=nums[i];
        }
        total_sum=total_sum-sum_nums;
        return total_sum;
    }
};

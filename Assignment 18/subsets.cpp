class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        long long n=0;
        vector<int> A;
        vector<vector<int>> result;
        recur(n,A,nums,result);
            result.erase(unique(result.begin(),result.end()), result.end());
        return result;
    }
    void recur(long long n,vector<int> A,vector<int>& nums, vector<vector<int>>& result){
        if(n>=nums.size()){
            result.push_back(A);
            return;
        }   
        recur(n+1,A,nums,result);
        A.push_back(nums[n]);
        recur(n+1,A,nums,result);
    }
};

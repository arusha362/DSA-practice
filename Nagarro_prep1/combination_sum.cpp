class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> A;
        vector<vector<int>> result;
        recur(candidates,result,A,target,0);
        return result;
    }
    void recur(vector<int>& A,vector<vector<int>> &ans,vector<int> &nums,int x,int j){
        int i=j;
        if(x==0){
            ans.push_back(nums);
        return;
        }
        while(i<A.size() && x-A[i]>=0){
            nums.push_back(A[i]);
            recur(A,ans,nums,x-A[i],i);
            nums.pop_back();
            i++;
        }
    }
};

class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int n=0;
        vector<int> A;
        vector<vector<int>> ans;
        sort(candidates.begin(),candidates.end());
        recur(n,target,A,candidates,ans);
        return ans;
    }
    void recur(int n, int target, vector<int>& A, vector<int>&candidates, vector<vector<int>>&ans){
        if(target==0){
            ans.push_back(A);
            return;
        }
        for(int i=n;i<candidates.size();i++){
            if(i>n && candidates[i]==candidates[i-1])continue;  
            if(candidates[i]<=target){
                A.push_back(candidates[i]); 
                recur(i+1,target-candidates[i],A,candidates,ans);
                A.pop_back();
            }
        }
    }
};

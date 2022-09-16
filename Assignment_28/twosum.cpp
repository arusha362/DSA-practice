class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> A;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            if(mp.find(target-nums[i])!=mp.end()){
                A.push_back(mp[target-nums[i]]);
                A.push_back(i);
                return A;
            }
            else{
            mp[nums[i]]=i;
            }
        }
        return A;
    }
};

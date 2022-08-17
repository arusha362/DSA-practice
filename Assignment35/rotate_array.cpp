class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> A(n);
        for(int i=0;i<n;i++){
            A[(i+k)%n]=nums[i];
        }
        nums=A;
    }
};

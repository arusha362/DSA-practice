class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        
        int max = *max_element(nums.begin(), nums.end());
        int min = *min_element(nums.begin(), nums.end());
        int range = max-min+1;
        int n = nums.size();
        vector<int> a(range), b(n);
        
        for (int i=0;i<n;i++){
            a[nums[i]-min]++;
        }
 
        for (int i=1;i<range;i++){
            a[i]+=a[i-1];
        }
 
        for (int i=n-1;i>=0;i--){
            b[a[nums[i]-min]-1]=nums[i];
            a[nums[i]-min]--;
        }

        
        return b;
    }
};

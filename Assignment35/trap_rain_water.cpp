class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size(),ans=0,maxheight_left=0;
        vector<int>SuffixMax(n+1);
        for(int i=n-1;i>=0;i--){
            SuffixMax[i]=max(SuffixMax[i+1],height[i]);    
        }
        for(int i=0;i<n;i++){
            ans += max(min(maxheight_left, SuffixMax[i+1])-height[i],0);
            maxheight_left = max(height[i],maxheight_left);
        }
        return ans;
    }
};

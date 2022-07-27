class Solution {
public:
    int search(vector<int>& A, int target) {
        int n=A.size();
        int low=0;
        int high=n;
        while(low<high){
            int mid = (low+high-1)/2;
            if(A[mid]==target){
                return mid;
            }
            else if(A[mid]>target){
                high=mid;
            }
            else if(A[mid]<target){
                low=mid+1;
            }
            
        }
        return -1;
        
    }
};

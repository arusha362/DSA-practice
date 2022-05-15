void merge(vector<int>& a, int start, int mid, int end){
    vector<int> b;
	int i=start, j=mid+1;
	while (i <= mid && j <= end) {
		if (a[i] <= a[j]) {
			b.push_back(a[i]);
			i++;
		}
		else {
			b.push_back(a[j]);
			j++;
		}
	}
	while(i<=mid){
		b.push_back(a[i]);
		i++;
	}
	while(j<=end){
		b.push_back(a[j]);
		j++;
	}
	for (int i=start;i<=end;++i)
		a[i] = b[i-start];
}

void MergeSort(vector<int>& a, int start, int end) {
	if (start<end) {
		int mid = (start+end) / 2;
		MergeSort(a, start, mid);
		MergeSort(a, mid + 1, end);
        merge(a,start,mid,end);
	}
}
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        MergeSort(nums,0,n-1);
        return nums;
    }
};

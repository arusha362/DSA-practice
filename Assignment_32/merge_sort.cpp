#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'countInversions' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

long merge(vector<int>&arr, int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    int* L = new int[n1];
    int* R = new int[n2];

    for (int i = 0; i < n1; i++){
         L[i] = arr[l + i];}
    for (int i = 0; i < n2; i++) {
        R[i] = arr[m+1+i];}

    int i = 0; int j = 0; int k = l;
    long count = 0;

    while (i<n1 && j<n2) {
        if (L[i]<=R[j]) {
            arr[k] = L[i]; 
            i++; k++;
        }
        else {
            arr[k] = R[j];
            j++; k++;
            count += n1-i;
        }
    }
    while (i<n1) {
        arr[k] = L[i];
        i++; k++;
    }
    while (j<n2) {
        arr[k] = R[j];
        j++; k++;
    }
    return count;
}


long mergeSort(vector<int>&arr, int l, int r) {
    long count = 0;
    if (l<r) {
        int m = (l+r) / 2;
        count+=mergeSort(arr, l, m);
        count+=mergeSort(arr, m+1, r);
        count+=merge(arr, l, m, r);
    }
    return count;
}
long countInversions(vector<int> &arr){
    long ans;
    ans =mergeSort(arr,0,arr.size()-1);

    return ans;
}

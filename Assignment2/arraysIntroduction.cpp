#include <bits/stdc++.h>
using namespace std;


int main() {
    vector<int> A;
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        int temp=0;
        cin>>temp;
        A.push_back(temp);
    }
    for(int i=n-1;i>=0;i--){
        cout<<A[i]<<" ";
    }
       
    return 0;
}

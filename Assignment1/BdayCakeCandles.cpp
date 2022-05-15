#include <bits/stdc++.h>

using namespace std;

int getMaxOfArray(vector<int> A){
    int max1=INT_MIN;
    for(int i=0;i<A.size();i++){
        if(A[i]>max1){
            max1=A[i];
        }
    }
    return max1;
}

int main(){
    vector<int> A;
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        int temp=0;
        cin>>temp;
        A.push_back(temp);
    }
    
    int max=getMaxOfArray(A);
    int count=0;
    for(int i=0;i<n;i++){
        if(A[i]==max){
            count++;
        }
    }
    cout<<count<<endl;
}

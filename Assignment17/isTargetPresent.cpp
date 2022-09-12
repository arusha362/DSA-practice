#include<bits/stdc++.h>
using namespace std;

bool isTargetPresent(vector<int>A, int target){
    //returns true if target is present in A else
    for(int i=0;i<A.size();i++){
        if(A[i]==target){
            return true;
        }
    }
    
    return false;
}

int main(){
    vector<int> A={3,2,6,9,5,7,1};
    bool ans=isTargetPresent(A,6);
    cout<<ans<<endl;
    return 0;
}

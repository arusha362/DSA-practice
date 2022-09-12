#include<bits/stdc++.h>
using namespace std;

bool isTargetPresentInCol(vector<vector<int> >A, int target, int c){
    //returns true if target is present in column c of A then returns true else return false;
    int row=A.size();
    for(int i=0;i<row;i++){
        if(A[i][c]==target) return true;
    }
    return false;
}


int main() {
    vector<vector<int>> A={{8,3,4},{7,9,6},{2,1,5}};
    int ans=isTargetPresentInCol(A,3,2);
    cout<<ans<<"\n";
    return 0;
}

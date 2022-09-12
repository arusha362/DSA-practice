#include<bits/stdc++.h>
using namespace std;

bool isTargetPresentIn2DVector(vector<vector<int> >A, int target){
    //returns true if target is present in A
    int row=A.size(),col=A[0].size();
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(A[i][j]==target) return true;
        }
    }
    
    return false;
}

int main(){
    vector<vector<int>> A={{8,3,4},{7,9,6},{2,1,5}};
    int ans=isTargetPresentIn2DVector(A,0);
    cout<<ans<<"\n";
    return 0;
}

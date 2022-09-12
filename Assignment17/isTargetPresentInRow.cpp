#include<bits/stdc++.h>
using namespace std;

bool isTargetPresentInRow(vector<vector<int> >A, int target, int r){
    //returns true if target is present in row r of A then returns true else return false;
    int col=A[0].size();
    for(int i=0;i<col;i++){
        if(A[r][i]==target){
            return true;
        }
    }
    return false;
}

int main(){
    vector<vector<int>> A={{8,3,4},{7,9,6},{2,1,5}};
    int ans=isTargetPresentInRow(A,9,1);
    cout<<ans<<"\n";
    return 0;
}

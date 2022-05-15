#include <bits/stdc++.h>

using namespace std;

int getMinOfArray(vector<int> A){
    int min1=INT_MAX;
    for(int i=0;i<A.size();i++){
        if(A[i]<min1){
            min1=A[i];
        }
    }
    return min1;
}

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
    vector<int>A;

    for(int i=0;i<5;i++){
        int temp=0;
        cin>>temp;
        A.push_back(temp);
    }
    long sum_min=0;
    long sum_max=0;
    int min=getMinOfArray(A);
    int max=getMaxOfArray(A);
    for(int i=0;i<5;i++){
        sum_min+=A[i];
    }
    sum_min=sum_min-max;
    for(int i=0;i<5;i++){
        sum_max+=A[i];
    }
    sum_max=sum_max-min;
    cout<<sum_min<<" "<<sum_max<<endl;
    
    
}

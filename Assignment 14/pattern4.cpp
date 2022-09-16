#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter n which should be power of 2:"<<" ";
    cin>>n;
    
    while(n>0){
        for(int i=0;i<n;i++){
            cout<<"#";
        }
        cout<<endl;
        n=n/2;
    }
    
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int i=1;
    int sum=0;
    while(i<=n){
        sum+=i;
        int current =sum;
        while(current!=0){
            cout<<"#";
            current--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}

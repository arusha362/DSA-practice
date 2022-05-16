#include <bits/stdc++.h>

using namespace std;


int max_of_four(int a,int b,int c,int d){
    int max;
    if(a>b){
        if(a>c && a>d){
            max=a;
        }
        else if (a>c && a<d){
            max=d;
        }
        else{
            max=c;
        }#include <bits/stdc++.h>

using namespace std;


int max_of_four(int a,int b,int c,int d){
    int max;
    if(a>b){
        if(a>c && a>d){
            max=a;
        }
        else if (a>c && a<d){
            max=d;
        }
        else{
            max=c;
        }
    }
    else{
    }
    else{
        if(b>c && b>d){
            max=b;
        }
        else if(b>c && b<d){
            max=d;
        }
        else{
            max=c;
        }
    }
    
    return max;
}

int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int ans = max_of_four(a, b, c, d);
    cout<<ans<<endl;
    
    return 0;
}

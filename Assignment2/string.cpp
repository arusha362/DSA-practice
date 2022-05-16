#include <bits/stdc++.h>
using namespace std;

int main() {
	string a,b;
    cin>>a>>b;
    
    int len1=a.size();
    int len2=b.size();
    cout<<len1<<" "<<len2<<endl;
    
    string c = a + b;
    cout<<c<<endl;
    
    string a1=a;
    string b1=b;
    swap(a1[0],b1[0]);
    cout<<a1<<" "<<b1;
    
  
    return 0;
}

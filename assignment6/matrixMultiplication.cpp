#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>product(vector<vector<int>>A,vector<vector<int>>B){
    vector<vector<int>>C;
    for(int i=0;i<A.size();i++){
    	vector<int>z;
        for(int j=0;j<B[0].size();j++){
            int sum=0;
            
            for(int k=0;k<B.size();k++){
                sum+=A[i][k]*B[k][j];
            
            }
            z.push_back(sum);
        }
        C.push_back(z);
    }
    return C;
}





int main(){
    vector<vector<int>>A;vector<vector<int>>B;vector<vector<int>>C;
    int n,m,o,p;
    cout<<"Enter size of matrix A";
    cin>>n>>m;
    cout<<"Enter size of matrix B";
    cin>>o>>p;
    for(int i=0;i<n;i++){
        vector<int>x;
        for(int j=0;j<m;j++){
            int temp=0;
            cin>>temp;
            x.push_back(temp);
        }
        A.push_back(x);
    }
    for(int i=0;i<o;i++){
        vector<int>y;
        for(int j=0;j<p;j++){
            int temp=0;
            cin>>temp;
            y.push_back(temp);
        }
        B.push_back(y);
    }
    cout<<"Matrix A:"<<"\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"Matrix B:"<<"\n";
    for(int i=0;i<o;i++){
        for(int j=0;j<p;j++){
            cout<<B[i][j]<<" ";
        }
        cout<<"\n";
    }
    if(m==o){
        C=product(A,B);
    }
    cout<<"product of two matrices are"<<"\n";
        for(int i=0;i<n;i++){
        	for(int j=0;j<p;j++){
        	   
        		cout<<C[i][j]<<" ";
        		
        	}
        	cout<<"\n";
        }
    
    
  return 0;  
}

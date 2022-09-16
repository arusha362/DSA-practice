#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'encryption' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string encryption(string s) {
    string enrpt="";
    int n=s.length(),f=floor(sqrt(n)),c=ceil(sqrt(n));
    if(f*c<n){
        f++;
    }
    vector<vector<char>> a(f, vector<char> (c));
    int k=0;
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            a[i][j]=s[k];
            k++;
        }
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<f;j++){
            char m=a[j][i];
            if(m){
                enrpt+=m;
            }   
        }
        enrpt+=' ';
    }
    return enrpt;
}

#include <bits/stdc++.h>

using namespace std;


/*
 * Complete the 'plusMinus' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    
    for(int j=0;j<n;j++){
        int temp=0;
        cin>>temp;
        arr.push_back(temp);
    }
    float neg=0,p=0,z=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            neg++;
        }
        else if(arr[i]>0){
            p++;
        }
        else{
            z++;
        }
    }
    float ratio_of_neg=neg/n;
    float ratio_of_pos=p/n;
    float ratio_of_zeros=z/n;
    cout<<fixed<<setprecision(6)<<ratio_of_pos<<endl;
    cout<<fixed<<setprecision(6)<<ratio_of_neg<<endl;
    cout<<fixed<<setprecision(6)<<ratio_of_zeros<<endl;
    return 0;

}

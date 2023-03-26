#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max_prod=INT_MIN;
    int prod=1;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            prod=prod*a[j];
            max_prod=max(max_prod,prod);
        }
        
        prod=1;
    }
    // int currprod[n+1];
    // currprod[0]=1;
    // for(int i=1;i<=n;i++){
    //     currprod[i]=currprod[i-1]*a[i-1];
        
    //     max_prod=max(max_prod,currprod[i]);
    // }
    // cout<<max_prod;
}
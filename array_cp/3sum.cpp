#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum;
    int i,j,k;
    for(i=0;i<n-2;i++){
        for(j=i+1;j<n-1;j++){
            for(k=i+2;k<n;k++){
                sum=a[i]+a[j]+a[k];
                if(sum==0){
                    cout<<a[i]<<","<<a[j]<<","<<a[k]<<" ";
                }
            }
        }
    }
}
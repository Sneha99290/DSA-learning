// Given an unsorted array of size n. Array elements are in the range of 1 to n. One number from set {1, 2, …n} is missing and one number occurs twice in the array. Find these two numbers.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }


    // this can be done only when modification in array is allowed
//     int ans[2];
//     sort(a,a+n);
//     for(int i=0;i<n;i++){
//         if(a[i]==a[i+1]){
//             ans[0]=a[i];
//             break;
//         }
        
//     }
    
//     for(int i=0;i<n;i++){
//         if(a[i+1]!=a[i]+1){
//             ans[1]=a[i]+1;
//             break;
//         }
        
//     }
//     cout<<ans[0]<<ans[1];

int ans[2];
int b[n]={};
for(int i=0;i<n;i++){
    b[a[i]-1]=b[a[i]-1]+1;
}
for(int i=0;i<n;i++){
    if(b[i]==0){
        ans[1]=i+1;
    }
    if(b[i]>1){
        ans[0]=i+1;
    }
}
cout<<ans[0]<<ans[1];
}
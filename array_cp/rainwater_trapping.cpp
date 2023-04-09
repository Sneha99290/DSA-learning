// Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int total=0;
    int left[n];
    int right[n];
    left[0]=a[0];
    right[n-1]=a[n-1];
    for(int i=1;i<n;i++){
        left[i]=max(a[i],left[i-1]);
    }
    right[n]=a[n];
    for(int j=n-2;j>=0;j--){
        right[j]=max(a[j],right[j+1]);
    }
    for(int i=0;i<n;i++){
        total=total+(min(left[i],right[i])-a[i]);
    }
    cout<<total;
}
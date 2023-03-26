// Given an array of positive integers. We need to make the given array a ‘Palindrome’. The only allowed operation is”merging” (of two adjacent elements). Merging two adjacent elements means replacing them with their sum. The task is to find the minimum number of merge operations required to make the given array a ‘Palindrome’.

// To make any array a palindrome, we can simply apply merge operation n-1 times where n is the size of the array (because a single-element array is always palindromic, similar to single-character string). In that case, the size of array will be reduced to 1. But in this problem, we are asked to do it in the minimum number of operations.

#include<bits/stdc++.h>
using namespace std;

int merge(int a[],int n){
    int l=0;
    int h=n-1;
    int ans=0;
    while(l<h){
        if(a[l]==a[h]){
            l++;
            h--;
        }
        else if(a[l]<a[h]){
            a[l]=a[l]+a[l+1];
            l++;
            ans++;
        }
        else{
            a[h]=a[h]+a[h-1];
            h--;
            ans++;
        }
        
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int result=merge(a,n);
    cout<<result;
}
// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

// You must write an algorithm that runs in O(n) time and without using the division operation.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> product(n);
    vector<int> left(n);
    vector<int> right(n);
    left[0]=a[0];
    right[n-1]=a[n-1];
    for(int i=1;i<n;i++){
        left[i]=left[i-1]*a[i];
    }
    for(int i=n-2;i>=0;i--){
        right[i]=right[i+1]*a[i];
    }
    product[0]=right[1];
    product[n-1]=left[n-2];
    for(int i=1;i<=n-2;i++){
        product[i]=left[i-1]*right[i+1];
    }
    for(int i=0;i<n;i++){
        cout<<product[i]<<" ";
    }
}

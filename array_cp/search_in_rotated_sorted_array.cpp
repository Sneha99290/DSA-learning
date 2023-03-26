// There is an integer array nums sorted in ascending order (with distinct values).

// Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

// Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

// this can be done using simple binary search also

#include<bits/stdc++.h>
using namespace std;
int binary_search(int a[],int n,int num){
    int l=0;
    
    int h=n-1;
    int mid=(l+h)/2;
    while(l<h){
        
        if(num==a[mid]){
            return mid;
        }
        else if(a[l]<a[mid]){
            if(num>=a[l]&&a[mid]>num){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        else {
            if(num>a[mid]&&num<a[h]){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        
    }
    return -1;
    
}


int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int num;
    cout<<"enter num";
    cin>>num;
    int ans;
    ans=binary_search(a,n,num);
    cout<<ans;
    
}
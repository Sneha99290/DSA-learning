// check if thee exists two elements in an array such that their sum is equal to given k

//------- brute force approach    Time compexity=O(n^2)------

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter req. sum";
    int sum;
    cin>>sum;
    int S;
    bool ans;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            S=a[i]+a[j];
            if(S==sum){
                ans=true;
                break;
            } 
            
        }
    }
    cout<<ans;

// for sorted array (if not sorted then sort it and then apply this method) Time complexity = O(n)

    // int low=0,high=n;
    // while(low<high){
    //     if(a[low]+a[high]==sum){
    //         ans=true;
    //     }
    //     else if(a[low]+a[high]>sum){
    //         high--;
        
    //     }
    //     else{
    //         low++;
    //     }
    //     ans=false;
    // }
    // cout<<ans;
}

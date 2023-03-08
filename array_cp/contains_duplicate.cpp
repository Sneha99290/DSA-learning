// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool ans;

    // -----brute force approach------
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(a[i]==a[j]){
    //             ans=true;
    //             break;
    //         }
            
    //     }
    // }
    // if(ans==true){
    //     cout<<"true";
    // }
    // else{
    //     cout<<"false";
    // }


    // ---using sets----
   set<int> T;
   for(int i=0;i<n;i++){
    T.insert(a[i]);
   }
   if(T.size()<n){
    ans=true;
   }
   else{
    ans=false;
   }
   cout<<ans;
}
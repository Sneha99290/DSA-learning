// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

// ----brute force approach--

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // int maximum=INT_MIN;
    // int profit;
    // for(int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n;j++){
            
    //         profit=a[j]-a[i];
    //         if(profit>0){
    //             maximum=max(profit,maximum);
    //         }
    //         else{
    //             maximum=max(0,maximum);
    //         }
            
    //     }
    // }
    // cout<<maximum;



    // ---using extra space--- time complxity=O(n) space complexity=O(n)
    // int maximum[n];
    // maximum[n-1]=a[n-1];
    // for(int i=n-2;i>=0;i--){
    //     maximum[i]=max(maximum[i+1],a[i]);
    // }
    
    // int profit;
    // int max_profit=INT_MIN;
    
    // for(int i=0;i<n;i++){
    //     profit=maximum[i]-a[i];
        
    //     max_profit=max(max_profit,profit);
    // }
    // cout<<max_profit;

    
    int minsofar=a[0];
    int maxprofit=0;
    for(int i=0;i<n;i++){
        minsofar=min(a[i],minsofar);
        maxprofit=max(maxprofit,a[i]-minsofar);
    }
    cout<<maxprofit;


    
}
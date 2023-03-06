// find the maximum subarray sum
//------- brute force approach------
// time complexity = O(n^3)
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
         
    
//     for(int i=0;i<n;i++){
        
//         for(int j=i;j<n;j++){
//             int sum=0;
//             for(int k=i;k<=j;k++){
//                 sum=sum+a[k];
//             }
//             maxsum=max(sum,maxsum);
//         }
//     }
//     cout<<maxsum;
// }

// ------cumulative sum approach ---> time complexity O(n^2)------
// here we maintain the currnt sum array and try to find the maximum sum by subracting previous elements from sum
//     int curr_sum[n+1];
//     curr_sum[0]=0;
//     for(int i=1;i<=n;i++){
//         curr_sum[i]=curr_sum[i-1]+a[i-1];
//     }
//     for(int i=1;i<=n;i++){
//         int sum=0;
//         for(int j=0;j<i;j++){
//             sum=curr_sum[i]-curr_sum[j];
//             maxsum=max(sum,maxsum);
//         }
//     }
//     cout<<maxsum;
// }

//------- kadane's algo --->time complexity O(n)-------
// here we maintain an array of current sum such that if the current sum becomes negative we change it to zero . the reason behind this approach is if we want max sum then mostly we have to avoid the negative elements of array
    int maxsum=INT_MIN; 
    int currsum[n+1];
    currsum[0]=0;
    for(int i=1;i<=n;i++){
        currsum[i]=currsum[i-1]+a[i-1];
        if(currsum[i]<0){
            currsum[i]=0;
        }
        maxsum=max(maxsum,currsum[i]);
    }
    cout<<maxsum;
}
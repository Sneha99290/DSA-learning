#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
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

    // this can be done using divide and conquer approach too
//     class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         return maxSubArray(nums, 0, size(nums)-1);
//     }
//     int maxSubArray(vector<int>& A, int L, int R){
//         if(L > R) return INT_MIN;
//         int mid = (L + R) / 2, leftSum = 0, rightSum = 0;
//         // leftSum = max subarray sum in [L, mid-1] and starting from mid-1
//         for(int i = mid-1, curSum = 0; i >= L; i--)
//             curSum += A[i],
//             leftSum=max(leftSum, curSum);
//         // rightSum = max subarray sum in [mid+1, R] and starting from mid+1
//         for(int i = mid+1, curSum = 0; i <= R; i++)
//             curSum += A[i],
//             rightSum = max(rightSum, curSum);        
// 		// return max of 3 cases 
//         return max({ maxSubArray(A, L, mid-1), maxSubArray(A, mid+1, R), leftSum + A[mid] + rightSum });
//     }	
// };
}
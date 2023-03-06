// find the maximum circular subarray sum
// here we will find the elemnts' sum which will not contribute to the maximum circular array sum. the we will subtract this from total array sum to get the answer . For achieving this first we will store the elements with reverse sign in different array and find it's maximum sum (which is sm of non contributing elements) using kadane's algo. then subtract it from total sum of orignal array to get the ans.

#include<bits/stdc++.h>
using namespace std;
int kadane(int arr[],int n){
    int maxsum=INT_MIN; 
    int currsum[n+1];
    currsum[0]=0;
    for(int i=1;i<=n;i++){
        currsum[i]=currsum[i-1]+arr[i-1];
        if(currsum[i]<0){
            currsum[i]=0;
        }
        maxsum=max(maxsum,currsum[i]);
    }
    return maxsum;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int b[n];
    for(int i=0;i<n;i++){
        b[i]=0-a[i];
    }
    
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
    int max=sum+kadane(b,n);
    cout<<max;
}
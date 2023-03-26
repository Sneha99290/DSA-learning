// Given an array of N integers where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates. There are m students, the task is to distribute chocolate packets such that: 

// Each student gets one packet.
// The difference between the number of chocolates in the packet with maximum chocolates and the packet with minimum chocolates given to the students is minimum.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<"enter no. of student";
    int m;
    cin>>m;
    if(m==0||n==0){
        return 0;
    }
    if(n<m){
        return -1;
    }
    int min_diff=INT_MAX;
    int diff;
    for(int i=0;i<n-m;i++){
        diff=a[i+m-1]-a[i];
        min_diff=min(diff,min_diff);
    }
    cout<<min_diff;    
}
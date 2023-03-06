// brute force approach
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter array size";
//     cin>>n;
//     int a[n];
//     cout<<"enter array elements";
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int ans;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(a[i]==a[j]){
//                 ans=i;
//                 cout<<ans;
//             }
            
//         }
//     }
    
// }

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    const int N = 1e6+2;
    int idx[N];
    for(int i=0;i<n;i++)
    {
        idx[N]=-1;
    }

    int minidx = INT_MAX;
    
    for(int i=0;i<n;i++)
    {
        
        if(idx[a[i]] != -1)
        {
            minidx = min(minidx,idx[a[i]]);
        }
        else{
            idx[a[i]] = i;
        }
    }
    if(minidx==INT_MAX)
    {
        cout<<-1;
    }
    else{
        cout<<minidx;
    }
    return 0;

}
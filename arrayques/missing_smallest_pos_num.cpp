// find smallest positive number missing from array including 0



#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    int a[n];
    cout<<"enter array elements";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    const int N = 1e6+2;
    int check[N];
    for(int i=0;i<N;i++){
        check[i]=0;
    }
    for(int j=0;j<n;j++){
        if(a[j]>=0){
            check[a[j]]=1;
        }
        else{
            check[a[j]]=0;
        }
    }
    int ans = -1;
    for(int i=0;i<N;i++){
        if(check[i]==0){
            ans=i;
            break;
        }
    }
    cout<<ans;
}
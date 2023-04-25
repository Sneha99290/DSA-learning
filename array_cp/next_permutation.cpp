#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int idx=-1;
    for(int i=n-1;i>=0;i--){
        if(a[i-1]<a[i]){
            idx=i;
            break;
        }
    }
    if(idx==-1){
        reverse(a.begin(),a.end());
    }
    else{
        int prev=idx;
        for(int i=idx+1;i<n;i++){
            if(a[i]>a[idx-1] && a[i]<=a[prev]){
                prev=i;
            }
        }
        swap(a[prev],a[idx-1]);
        reverse(a.begin()+idx,a.end());
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
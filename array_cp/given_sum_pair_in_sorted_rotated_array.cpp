
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int pivot;
    for(int i=0;i<n;i++){
        if(a[i+1]<a[i]){
            pivot=i+1;
            break;
        }
    }
    // int x=a.begin();
    // cout<<x;
    rotate(a.begin(),a.begin()+pivot,a.end());
    int l=0;
    int h=n-1;
    int sum;
    cin>>sum;
    bool ans=false;

    while(l<h){
        if(a[l]+a[h]==sum){
            ans=true;
        }
        else if(a[l]+a[h]<sum){
            l++;
        }
        else {
            h--;
        }
    }    
    cout<<ans;
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the array size";
    cin>>n;
    int a[n];
    cout<<"enter the array elements";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int pd,mxlen=2,len=2;
    pd=a[1]-a[0];
    for(int i=2;i<n;i++){
        
        
        if(pd==a[i]-a[i-1]){
            len++;
        }
        else{
            pd=a[i]-a[i-1];
            len=2;
        }
        if(mxlen<len){
            mxlen=len;
        }
    }
    cout<<"length of longest arithmetic subarray is "<<mxlen;
}
#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter array size";
    cin>>n;
    int a[n];
    cout<<"enter array elements";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            sum=sum+a[j];
            cout<<sum<<"\t";
        }
        sum=0;
    }
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no. of days";
    cin>>n;
    int a[n];
    cout<<"enter no. of visitors for following days";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max=a[0];
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]>=max&&a[i]>a[i+1]){
            count++;
            cout<<i+1<<"is record breaking day with no. of visitors ="<<a[i]<<"\n";
        }
    }
    cout<<"\nno. of record breaking days are "<<count;
}
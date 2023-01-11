#include<iostream>
using namespace std;
void maximum(int a[],int n){
    int max=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>=max){
            max=a[i];
            cout<<max<<"\t";
        }
        else{
            cout<<max<<"\t";
        }
    }
}
int main()
{
    int n;
    cout<<"enter the array size";
    cin>>n;
    int a[n];
    cout<<"enter array elements";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    maximum(a,n);
}
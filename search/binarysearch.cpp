#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key)
{
    int l=0;
    int h=(n-1);
    int m=(l+h)/2;
    while(l<=h){
        if(arr[m]==key)
        {
            return m;
        }
        else if(arr[m]<key)
        {
            l=m+1;
        }
        else
        {
            h=m-1;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<binarysearch(arr,n,key);
    return 0;
}
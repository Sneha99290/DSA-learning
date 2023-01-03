#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
void bubblesort(int arr[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
                
        }
}
int main()
{
    int n;
    cout<<"enter array size";
    cin>>n;
    int a[n];
    cout<<"enter array elements";
    for(int i=0;i<n;i++)
        cin>>a[i];
    bubblesort(a,n);    
    cout<<"after sorting\n";
    for(int i=0;i<n;i++)
        cout<<a[i]<<"\t";   
}
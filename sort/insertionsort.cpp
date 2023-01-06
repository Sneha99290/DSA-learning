#include<iostream>
using namespace std;

void insertionsort(int arr[],int n)
{
    int i,j,current;
    for(i=1;i<n;i++)
    {
        current=arr[i];
        j=i-1;
        while(j>=0&&current<arr[j])
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
        

    }
}
int main()
{
    int n;
    cout<<"enter array size\n";
    cin>>n;
    int a[n];
    cout<<"enter array elements\n";
    for(int i=0;i<n;i++)
        cin>>a[i];
    insertionsort(a,n);
    cout<<"after sorting\n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }    
}
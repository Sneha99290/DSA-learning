#include<iostream>
using namespace std;
void swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
}
int partition(int a[],int l,int r)
{
    int i=l-1;
    int pivot=a[r];
    for(int j=l;j<r;j++)
    {
        if(a[j]<pivot)
        {
            i++;
            swap(a[i],a[j]);
        }

    }
    swap(a[i+1],a[r]);
    return (i+1);
}
void quicksort(int a[],int l,int r)
{
    if(l<r)
    {
        int pi=partition(a,l,r);
        quicksort(a,l,pi-1);
        quicksort(a,pi+1,r);
    }
}
int main()
{
    int n;
    cout<<"enter array size\n";
    cin>>n;
    int a[n];
    cout<<"enter array elements";
    for(int i=0;i<n;i++)
        cin>>a[i];
       
    quicksort(a,0,n-1);
    cout<<"after sorting\n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }    
}
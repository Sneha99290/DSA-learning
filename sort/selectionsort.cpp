#include<iostream>
using namespace std;
void selsort(int a[],int n)
{
    int i,j,min;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
            {
                min=j;
            }
            int temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
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
    selsort(a,n);
    cout<<"after sorting\n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }    
}
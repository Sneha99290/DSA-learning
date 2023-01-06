#include<iostream>
using namespace std;
void merge(int a[],int l,int m,int r){
    int n1=m-l+1;
    int n2=r-m;
    int b[n1],c[n2];
    int i,j,k;
    for(i=0;i<n1;i++){
        b[i]=a[l+i];
    }
    for(j=0;j<n2;j++){
        c[j]=a[m+1+j];
    }
    i=0;
    j=0;
    k=l;
    while(i<n1&&j<n2){
        if(b[i]<=c[j]){
            a[k]=b[i];
            i++;
        }
        else{
            a[k]=c[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        a[k]=b[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k]=c[j];
        j++;
        k++;
    }
    
}
void mergesort(int a[],int l,int r){
    if(l<r)
    {
        int m=(l+r)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        merge(a,l,m,r);
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
       
    mergesort(a,0,n-1);
    cout<<"after sorting\n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }    
}
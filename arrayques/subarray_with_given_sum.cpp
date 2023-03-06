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
    int S,i,j;
    cout<<"enter required sum";
    cin>>S;
    
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            
            sum=sum+a[j];
            if(sum==S){
                cout<<i<<"\t"<<j<<"\n";
            }
            else{
                cout<<"no subarray with given sum";
            }
        }
        sum=0;
    }
    
}


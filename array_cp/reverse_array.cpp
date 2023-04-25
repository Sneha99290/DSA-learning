// reverse the array
#include<bits/stdc++.h>
using namespace std;

// -------swapping the start and end values recursively------
void rev_array(int a[],int start,int end){
    if(start>=end){
        return;
    }
    int temp=a[start];
    a[start]=a[end];
    a[end]=temp;
    rev_array(a,start+1,end-1);
}

// -------swapping the start and end values iteratively------
// void rev_array(int a[],int start,int end){
//     while(start<end){
//         int temp;
//         temp=a[start];
//         a[start]=a[end];
//         a[end]=temp;
//         start++;
//         end--;
//     }
// }
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    rev_array(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}
    // -------brute force approach------
    // int b[n];
    // int j=0;
    // for(int i=n-1;i>=0;i--){
    //     b[j]=a[i];
    //     j++;
    // }
    // for(int i=0;i<n;i++){
    //     cout<<b[i];
    // }
// }

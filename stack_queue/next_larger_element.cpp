#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int b[n];
    stack<int> st;
    st.push(0);
    
    for(int i=1;i<n;i++){
        
        while(!st.empty() && a[st.top()]<a[i]){
            b[st.top()]=a[i];
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        b[st.top()]=-1;
        st.pop();
    }
    for(int i=0;i<n;i++){
        cout<<b[i];
    }

}
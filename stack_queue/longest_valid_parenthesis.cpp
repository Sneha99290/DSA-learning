#include<bits/stdc++.h>
using namespace std;

int main(){
    int len=0;
    stack<int> st;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            st.push(i);
        }
        else {
            st.pop();
            if(st.empty()){
                st.push(i);
            }
            else{
                len=max(len,i-st.top());
            }
        }
    }
    cout<<len;
}
#include<bits/stdc++.h>
using namespace std;

bool isValid(string s){
    int n=s.size();
    stack<char> st;
    bool res=true;
    for(int i=0;i<n;i++){
        if(s[i]=='{' || s[i]=='[' || s[i]=='('){
            st.push(s[i]);
        }
        else if(!st.empty() && s[i]==')'){
            if(st.top()=='('){
                st.pop();
            }
            else{
                res=false;
                break;
            }
        }
        else if(!st.empty() && s[i]=='}'){
            if(st.top()=='{'){
                st.pop();
                
            }
            else{
                res=false;
                break;
            }
        }
        else if(!st.empty() && s[i]==']'){
            if(st.top()=='['){
                st.pop();
            }
            else{
                res=false;
                break;
            }
        }
    }
    if(!st.empty()){
        return false;
    }
    return res;
}

int main(){
    string s;
    cin>>s;
    if(isValid(s)==true){
        cout<<"valid string";
    }
    else{
        cout<<"invalid string";
    }
}
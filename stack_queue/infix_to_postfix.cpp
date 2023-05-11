#include<bits/stdc++.h>
using namespace std;

int precedence(char c){
    if(c=='^'){
        return 3;
    }
    else if(c=='/' || c=='*'){
        return 2;
    }
    else if(c=='+' || c=='-'){
        return 1;
    }
    else {
        return -1;
    }
}
string infixtopostfix(string s){
    stack<char> ch;
    string res;
    for(int i=0;i<s.length();i++){
        
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') ||(s[i]>='0' && s[i]<='9')){
            res+=s[i];
        }
        else if(s[i]=='('){
            ch.push(s[i]);
        }
        else if(s[i]==')'){
            while(!ch.empty() && ch.top()!='('){
                res+=ch.top();
                ch.pop();

            }
            if(!ch.empty()){
                ch.pop();
            }
                
        }
        else{
            while(!ch.empty() && precedence(ch.top())>=precedence(s[i])){
                res+=ch.top();
                ch.pop();
            }
                ch.push(s[i]);
            
        }
        
    }
    while(!ch.empty()){
        res+=ch.top();
        ch.pop();
    }
    return res;
}

int main(){
    string s;
    cin>>s;
    cout<<infixtopostfix(s);
}
#include<iostream>
using namespace std;
#define n 100

class stack{
    int *arr;
    int top;
    public:
        stack(){
            arr=new int[n];
            top=-1;
        }
        void push(int x){
            if(top==n-1){
                cout<<"stack overflow";
                return;
            }
            ++top;
            arr[top]=x;
        }
        void pop(){
            if(top==-1){
                cout<<"stack underflow";
                return;
            }
            top--;
        }
        int Top(){
            if(top==-1){
                cout<<"no element";
                return -1;
            }
            return arr[top];
        }
        bool empty(){
            return top==-1;
        }

};

int main(){
    stack st;
    st.push(3);
    st.push(4);
    st.push(5);
    cout<<st.Top();
    st.pop();
    st.pop();
    st.pop();
    cout<<st.empty();
}
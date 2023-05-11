// Given an integer K and a queue of integers, we need to reverse the order of the first K elements of the queue, leaving the other elements in the same relative order.

// Only following standard operations are allowed on queue.

// enqueue(x) : Add an item x to rear of queue
// dequeue() : Remove an item from front of queue
// size() : Returns number of elements in queue.
// front() : Finds front item.
// Note: The above operations represent the general processings. In-built functions of the respective languages can be used to solve the problem.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    queue<int> q;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        q.push(x);
    }
    stack<int> st;
    int k;
    cin>>k;
    for(int i=0;i<k;i++){
        st.push(q.front());
        q.pop();
    }
    queue<int> res;
    for(int i=0;i<k;i++){
        res.push(st.top());
        st.pop();
    }
    while(!q.empty()){
        res.push(q.front());
        q.pop();
    }
    while(!res.empty()){
        cout<<res.front();
        res.pop();
    }
}
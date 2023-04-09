#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<vector<int>> output;
    set<vector<int>> s;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        int l=i+1;
        int h=n-1;
        while(l<h){
            int sum=a[i]+a[l]+a[h];
            if(sum==0){
                s.insert({a[i],a[l],a[h]});
                l++;
                h--;
            }
            else if(sum>0){
                h--;
            }
            else{
                l++;
            }
        }
    }
    for(auto i:s){
        output.push_back(i);
    }
    for(int i=0;i<output.size();i++){
       cout<<output[i];
    }

}
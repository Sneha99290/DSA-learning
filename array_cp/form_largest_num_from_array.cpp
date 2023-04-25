#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<string> largest;
    for(int i=0;i<n;i++){
        largest.push_back(to_string(a[i]));
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            string xy=largest[i].append(largest[j]);
            string yx=largest[j].append(largest[i]);
            if(xy.compare(yx)>0){
                continue;
            }
            else{
                swap(largest[i],largest[j]);
            }
        }
    }
    for(int k=0;k<largest.size();k++)
    {
        cout<<largest[k];
    }
}
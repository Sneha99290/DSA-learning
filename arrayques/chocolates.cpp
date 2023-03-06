#include <bits/stdc++.h>

using namespace std;



/*
 * Complete the 'birthday' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY s
 *  2. INTEGER d
 *  3. INTEGER m
 */

int birthday(int s[],int n, int d, int m) {
    int sum=0,count=0;
    for(int i=0;i<n;i++){
        for(int j=1;j<=m;j++){
            
            sum=sum+s[j];
            
        }
        if(sum==d){
            count++;
        }
        else{
            sum=0;
        }
    }
    return count;
}

int main()
{
    int n;
    cin>>n;
    int s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    int d,m;
    cin>>d;
    cin>>m;
    cout<<birthday(s,n,d,m);
}


#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        int n;
        cin>>n;
        int arr[10004];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int dp[10004];
        dp[0]=arr[0];
        dp[1]=max(dp[0],arr[1]);
        for(int i=2; i<n; i++){
            dp[i] = max(dp[i-1], arr[i]+dp[i-2]);
        }
        cout<<"Case "<<i<<": "<<dp[n-1]<<endl;
    }
    return 0;
}
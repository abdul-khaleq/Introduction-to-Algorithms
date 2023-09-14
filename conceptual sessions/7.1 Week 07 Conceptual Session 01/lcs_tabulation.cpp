#include<bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int lcs(string s, int n, string e, int m){
    if(n==0 || m==0) return 0;
    if(dp[n][m] != -1) return dp[n][m];
    if(s[n-1] == e[m-1]){
        int op1 = lcs(s,n-1,e,m-1);
        return dp[n][m] = op1+1;
    }else{
        int op1 = lcs(s,n-1,e,m);
        int op2 = lcs(s,n,e,m-1);
        return dp[n][m] = max(op1, op2);
    }
}
int main(){
    string s,e;
    cin>>s>>e;
    int n=s.size();
    int m=e.size();
    int dp[n+1][m+1];

    for(int i=0; i<=n; i++){
        for(int j=0; j<=m; j++){
            if(i==0 || j==0){
                dp[i][j] = 0;
            }
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(s[i-1] == e[j-1]){
                dp[i][j] = dp[i-1][j-1]+1;
            }else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    for(int i=0; i<=n; i++){
        for(int j=0; j<=m; j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// sea
// eat
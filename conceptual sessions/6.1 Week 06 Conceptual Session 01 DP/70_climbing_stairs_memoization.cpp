#include <bits/stdc++.h>
using namespace std;
int dp[46] = {-1};
int climbStairs(int n)
{
    if(n<= 2) return n;
    if(dp[n] != 0) return dp[n];
    return dp[n] = climbStairs(n-1) + climbStairs(n-2);
}
int main()
{
    int n;
    cin>>n;

    cout << climbStairs(n);
    return 0;
}
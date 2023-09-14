#include <bits/stdc++.h>
using namespace std;
const long long int N = 1e5 + 5;
int dp[N];
bool solve(int n, int v)
{

    if (n == v)
    {
        return true;
    }
    if (n > v)
    {
        return false;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
        return dp[n] = solve(n + 3, v) || solve(n * 2, v);
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i <= N; i++)
        {
            dp[i] = -1;
        }

        if (solve(1, n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
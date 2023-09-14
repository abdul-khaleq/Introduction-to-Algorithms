#include <bits/stdc++.h>
using namespace std;
bool solve(long long int v, long long int n)
{
    if (v == n)
        return true;
    if (v > n)
        return false;
    else
    {
        bool op1 = solve(v * 10, n);
        bool op2 = solve(v * 20, n);
        return op1 || op2;
    }
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
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
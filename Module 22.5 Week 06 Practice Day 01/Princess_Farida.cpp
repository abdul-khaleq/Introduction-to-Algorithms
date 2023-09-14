#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long int ll;

main()
{
    int t, n;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> n;
        ll dp[n + 1];
        memset(dp, 0, sizeof(dp));
        for (int i = 0; i < n; i++)
        {
            cin >> dp[i];
        }
        dp[1] = max(dp[0], dp[1]);
        if (n == 0)
            printf("Case %d:  %d\n", i, 0);
        else if (n == 1)
            printf("Case %d:  %lld\n", i, dp[0]);
        else if (n == 2)
            printf("Case %d:  %lld\n", i, dp[1]);
        else
        {
            for (int i = 2; i < n; i++)
            {
                dp[i] = max((dp[i] + dp[i - 2]), dp[i - 1]);
            }
            printf("Case %d:  %lld\n", i, dp[n - 1]);
        }
    }
}
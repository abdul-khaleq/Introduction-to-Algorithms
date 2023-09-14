#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int dis[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int x;
            cin >> x;
            if(x == -1) dis[i][j] = INT_MAX;
            else dis[i][j] = x;
        }
    }

    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (dis[i][k] == INT_MAX || dis[k][j] == INT_MAX) continue;
                if (dis[i][j] > dis[i][k] + dis[k][j])
                {
                    dis[i][j] = dis[i][k] + dis[k][j];
                }
            }
        }
    }
    int max = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(dis[i][j] != INT_MAX && dis[i][j] > max) max = dis[i][j];
        }
    }
    cout<<max<<endl;
    return 0;
}
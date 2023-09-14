#include <bits/stdc++.h>
using namespace std;
const long long INF = 1e18 + 5;
int main()
{
    long long  n, e;
    cin >> n >> e;
    long long int dis[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            dis[i][j] = INF;
            if (i == j)
                dis[i][j] = 0;
        }
    }
    while (e--)
    {
        long long int a, b, w;
        cin >> a >> b >> w;
        if ( dis[a][b] > w)
        {
            dis[a][b] = w;
        }
    }
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (dis[i][k] + dis[k][j] != INF && dis[i][k] + dis[k][j] < dis[i][j])
                {
                    
                    dis[i][j] = dis[i][k] + dis[k][j];
                }
            }
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        if (dis[x][y] == INF)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << dis[x][y] << endl;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
#define pi pair<int, int>
using namespace std;
const int N = 1005;
bool vis[N][N];
int dis[N][N];
int t, n, m, ki, kj, qi, qj;
vector<pair<int, int>> path = {{1, 2}, {-1, 2}, {1, -2}, {-1, -2}, {2, 1}, {-2, 1}, {2, -1}, {-2, -1}};
bool isValid(int cI, int cJ)
{
    if (cI >= 0 && cI < n && cJ >= 0 && cJ < m)
        return true;
    else
        return false;
}
void bfs(int si, int sj)
{
    queue<pi> q;
    q.push({si, sj});
    dis[si][sj] = 0;
    vis[si][sj] = true;
    while (!q.empty())
    {
        pi parent = q.front();
        int pI = parent.first;
        int pJ = parent.second;
        q.pop();
        for (int i = 0; i < 8; i++)
        {
            pi p = path[i];
            int cI = pI + p.first;
            int cJ = pJ + p.second;
            if (isValid(cI, cJ) && !vis[cI][cJ])
            {
                q.push({cI, cJ});
                vis[cI][cJ] = true;
                dis[cI][cJ] = dis[pI][pJ] + 1;
            }
        }
    }
}
void resert_dis_vis()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            dis[i][j] = -1;
            vis[i][j] = false;
        }
    }
}
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        cin >> ki >> kj;
        cin >> qi >> qj;
        resert_dis_vis();
        bfs(ki, kj);
        // if(vis[qi][qj]){
            cout<<dis[qi][qj]<<endl;
        // }else{
        //     cout<<"-1"<<endl;
        // }
        
    }

    return 0;
}

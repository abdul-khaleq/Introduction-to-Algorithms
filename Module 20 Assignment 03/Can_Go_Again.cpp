#include <bits/stdc++.h>
using namespace std;
const long long int INF = 1e18 + 5;
class Edge
{
public:
    int u, v, w;
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> v;
    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        Edge ed(a, b, w);
        v.push_back(ed);
    }
    long long int dis[n + 1];
    int s, q;
    cin >> s >> q;
    for (int i = 1; i <= n; i++)
    {
        dis[i] = INF;
    }
    dis[s] = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            Edge ed = v[j];
            int a = ed.u;
            int b = ed.v;
            int w = ed.w;
            if (dis[a] != INF && dis[a] + w < dis[b])
            {
                dis[b] = dis[a] + w;
            }
        }
    }
    bool cycle = false;
    for (int i = 0; i < q; i++)
    {
        int d;
        cin >> d;

        for (int j = 0; j < v.size(); j++)
        {
            Edge ed = v[j];
            int a = ed.u;
            int b = ed.v;
            int w = ed.w;
            if (dis[a] != INF && dis[a] + w < dis[b])
            {
                cycle = true;
                break;
                dis[b] = dis[a] + w;
            }
        }
    if (cycle)
    {
        cout << "Negative Cycle Detected" << endl;
        break;
    }
        if (dis[d] == INF)
        {
            cout << "Not Possible" << endl;
        }
        else
        {
            cout << dis[d] << endl;
        }
    }
    return 0;
}

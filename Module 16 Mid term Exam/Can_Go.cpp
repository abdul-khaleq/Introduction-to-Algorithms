#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
vector<pair<int,int>> v[N];
long long  int dis[N];
bool vis[N];
void dijkstra(int s)
{
    priority_queue<pair<long long int, int>, vector<pair<long long int, int>>, greater<pair<long long int, int>>> pq;
    pq.push({0, s});
    dis[s] = 0;
    while (!pq.empty())
    {
        pair<long long int, int> parent = pq.top();
        pq.pop();
        int parentNode = parent.second;
        if (vis[parentNode])
            continue;
        vis[parentNode] = true;
        long long int parentCost = parent.first;
        for (int i = 0; i < v[parentNode].size(); i++)
        {
            pair<int, int> child = v[parentNode][i];
            int childNode = child.first;
            long long int childCost = child.second;
            if (parentCost + childCost < dis[childNode])
            {
                dis[childNode] = parentCost + childCost;
                pq.push({dis[childNode], childNode});
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        v[a].push_back({b, w});
    }
    for (long long int i = 1; i <= n; i++)
    {
        dis[i] = LONG_MAX;
    }
    int s;
    cin >> s;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int d;
        long long int dw;
        cin >> d >> dw;
        dijkstra(s);
        if(dis[d] <= dw){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> adj[N];
bool visited[N];
int level[N];
vector<int> v;
void bfs(int s)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;
    level[s] = 0;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        // cout<<"Visiting node: "<< u<<endl;
        for (int v : adj[u])
        { 
            if (visited[v] == true)
                continue;
            q.push(v);
            visited[v] = true;
            level[v] = level[u] + 1;
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int l;
    cin >> l;
    if(l ==0){
        cout<<0<<endl;
    }else{
    bfs(0);
    for (int i = 1; i <= N; i++)
    {
        if (level[i] == l)
        {
            v.push_back(i);
        }
    }
    if (v.empty())
    {
        cout<<"-1"<<endl;
    }else{
    for (auto it=v.begin(); it!= v.end(); it++)
        {
            cout << *it << " ";
        }
        cout<<endl;
    }
    }
    return 0;
}
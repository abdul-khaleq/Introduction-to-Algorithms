#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> adjacency[N];
bool visited[N];
int level[N];
vector <int> v;
void bfs(int s)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;
    level[s] = 0;
    while (!q.empty())
    {
        int u = q.front();
        v.push_back(u);
        q.pop();
        for (int v : adjacency[u])
        {
            if (visited[v])
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
        adjacency[u].push_back(v);
        adjacency[v].push_back(u);
    }
    int qq;
    cin >> qq;
    for (int i = 0; i < qq; i++)
    {   
        int f, d;
        cin >> f >> d;
        bfs(f);

        int flag = false;
        for(int val: v){
            // cout<<val<<" ";
            if(val == d){
                flag = true;
                cout <<level[val] << endl;
            }  
        }
        if(!flag) cout<<"-1"<<endl;
        v.clear();
                memset(visited, false, N);
        memset(level, 0, N);
    }
    return 0;
}
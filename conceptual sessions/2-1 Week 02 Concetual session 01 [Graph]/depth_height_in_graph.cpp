#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1000];
int visited[1000];
int depth[1000];
int height[1000];
void dfs(int parent){
    cout<<parent<<" ";
    visited[parent] = 1;
    for(int child:adj_list[parent]){
        if(visited[child] == 0){
            depth[child] = depth[parent] + 1;
            dfs(child);
            height[parent] = max(height[parent], height[child] + 1);
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
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    for(int i=0; i<n; i++){
        cout<<i<<"->";
        for(int j=0; j<adj_list[i].size(); j++){
            cout<<adj_list[i][j]<<" ";
        }
        cout<<endl;
    }

    int src = 0;
    dfs(src);

    cout<<endl<<"Depth "<<depth[5];
    cout<<endl<<"Depth "<<height[src];
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> adjacency_list[N];
bool visited[N];
int depth[N];
int height[N];

void dfs(int u){
    visited[u] = true;
    for(int v: adjacency_list[u]){
        if(visited[v]) continue;
        depth[v] = depth[u] + 1;
        dfs(v);
        if(height[v] + 1 > height[u]){
            height[u] = height[v] + 1;
        }
        // height[u] = max(height[u], height[v]+1);
    }
}
int main(){
    int n, m;
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;
        adjacency_list[u].push_back(v);
        adjacency_list[v].push_back(u);
    }

    dfs(1);
    for (int i = 1; i <=n; i++)
    {
        // cout<< "Depth of the node "<<i<<": "<<depth[i]<<endl;
    }
    for (int i = 1; i <=n; i++)
    {
        cout<< "Height of the node "<<i<<": "<<height[i]<<endl;
    }
    
    return 0;
}
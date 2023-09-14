#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
vector<int> adjacency_list[N];
bool visited[N];
void dfs(int u){
    visited[u] = true;
    for(int v:adjacency_list[u]){
        if(visited[v]) continue;
        dfs(v);
    }
    cout<<u<<" ";
}
int main(){
    int n,m;
    cin>>n>>m;

    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;
        adjacency_list[u].push_back(v);
        adjacency_list[v].push_back(u);
    }
    dfs(1);
    return 0;
}
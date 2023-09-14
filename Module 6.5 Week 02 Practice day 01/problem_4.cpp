#include<bits/stdc++.h>
using namespace std;
const int N= 1e5+5;
vector<int> adjacency_list[N];
bool visited[N];
int depth[N];
void dfs(int s){
    visited[s] = true;
    for(int v:adjacency_list[s]){
        if(!visited[v]){
            depth[v] = depth[s] + 1;
            dfs(v);
        }
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
    int d;
    cin>>d;
    cout<<"Depth of " <<d<<" = "<< depth[d];
    return 0;
}
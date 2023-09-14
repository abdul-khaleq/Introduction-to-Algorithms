#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> adjacency_list[N];
bool visited[N];
    int h= 0;
void dfs(int u){
    visited[u] = true;
    h++;
    for(int v: adjacency_list[u]){
        if(visited[v]) continue; 
        dfs(v);
    }
}
int main(){
    int n, m;
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;
        adjacency_list[u].push_back(v);
    }
    int k;
    cin>>k;
    dfs(k);
    cout<<h-1<<endl;
    return 0;
}
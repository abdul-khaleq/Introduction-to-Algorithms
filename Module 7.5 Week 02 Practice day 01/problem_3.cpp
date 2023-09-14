#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
vector<int> adjacency_list[N];
int visited[N];

bool dfs(int s, int p = -1){
    bool cycleExists = false;
    visited[s] = 1;
    for(int v: adjacency_list[s]){
        if(v == p) continue;
        if(visited[v]) return true;
        cycleExists = cycleExists || dfs(v, s);
    }
    return cycleExists;
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;
        adjacency_list[u].push_back(v);
        adjacency_list[v].push_back(u);
    }

    if(dfs(1)){
        cout<<"YES\n";
    }else{
        cout<<"No\n";
    }


    return 0;
}
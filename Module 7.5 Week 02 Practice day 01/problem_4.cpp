#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
vector<int> adjacency_list[N];
bool visited[N];

void bfs(int s){
    queue<int> q;
    q.push(s);
    visited[s] = true;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int v: adjacency_list[u]){
            if(visited[v]) continue;
            q.push(v);
            visited[v] = true;
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
    int cc = 0;
    for(int i=1; i<=n; i++){
        if(visited[i]) continue;
        bfs(i);
        cc++;
    }
    cout<<cc<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
vector<int> adjacency_list[N];
bool visited[N];
int level[N];

void bfs(int s){
    queue<int> q;
    q.push(s);
    visited[s] = true;
    level[s] = 0;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int v: adjacency_list[u]){
            if(visited[v]) continue;
            level[v] = level[u] + 1;
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
    bfs(1);
    int l;
    cin>>l;
    cout<<"Level of "<<l<<" = "<<level[l]<<endl;
    return 0;
}
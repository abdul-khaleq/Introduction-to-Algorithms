#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
vector<int> adjacency_list[N];
bool visited[N];
    int cc = 0;
vector<int> pcc[N];

void dfs(int s){
    visited[s] = true;
    pcc[cc].push_back(s);
    for(int v: adjacency_list[s]){
        if(visited[v]) continue;
        dfs(v);
    }
}

void bfs(int s){
    queue<int> q;
    q.push(s);
    visited[s] = true;
    while(!q.empty()){
        int u= q.front();
        q.pop();
        for(int v: adjacency_list[u]){
            if(visited[v]) continue;
            q.push(v);
            visited[v] =true;
        }
    }
}
int main(){
        int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adjacency_list[u].push_back(v);
        adjacency_list[v].push_back(u);
    }

    for (int i = 1; i <= n; i++)
    {
        if(visited[i]) continue;
        dfs(i);
        cc++;
    }
    
    for(int i=0; i<cc; i++){
        cout<<"Component "<< i<<" : ";
        for(int v:pcc[i]){
            cout<<v<<" ";
        }
        cout<<endl;
    }
    return 0;
}
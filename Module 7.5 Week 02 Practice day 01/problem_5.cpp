#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
vector<int> adjacency_list[N];
int visited[N];

vector<int> v[N];
int component = 0;

void dfs(int s){
    visited[s] = 1;
    v[component].push_back(s);
    for(int v: adjacency_list[s]){
        if(visited[v]) continue;
        dfs(v);
    }
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
    int cc=0;
    for(int i=1; i<=n; i++){
        if(visited[i]) continue;
        component++;
        dfs(i);
        cc++;
    }
    cout<<cc<<endl;

    for(int i=1; i<=component; i++){
        cout<<"Component "<<i<<" : ";
        for(int val: v[i]){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}
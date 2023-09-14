#include<bits/stdc++.h>
using namespace std;
const int N= 1e5+5;
vector<int> adjacency_list[N];
bool visited[N];
int height[N];
void dfs(int s){
    visited[s] = true;
    for(int v:adjacency_list[s]){
        if(!visited[v]){
            dfs(v);
            height[s] = max(height[s], height[v]+1);
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
    int h;
    cin>>h;
    cout<<"Height of " <<h<<" = "<< height[h];
    return 0;
}
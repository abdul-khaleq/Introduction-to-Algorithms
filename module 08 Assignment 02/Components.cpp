#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<int> adjacency_list[N];
bool visited[N];

void dfs(int s, int &count){
    visited[s] = true;
    count++;
    for(int val: adjacency_list[s]){
        if(visited[val]) continue;
        dfs(val, count);
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
    vector<int> vv;
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        if(visited[i]) continue;
        dfs(i, count);
        if(count > 1){
            vv.push_back(count);
        }
        count = 0;
        
    }
    sort(vv.begin(), vv.end());
    for(int val: vv){
        cout<<val<<" ";
    }
    return 0;
}
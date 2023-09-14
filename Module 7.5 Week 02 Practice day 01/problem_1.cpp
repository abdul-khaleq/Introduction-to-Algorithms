#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
vector<int> adjacency_list[N];
bool visited[N];

void bfs(int s){
    queue<int> q;
    stack<int> st;
    q.push(s);
    visited[s] = true;

    while(!q.empty()){
        int u = q.front();
        st.push(u);
        q.pop();
        for(int v: adjacency_list[u]){
            if(visited[v]) continue;
            q.push(v);
            visited[v] = true;
        }
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
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
    return 0;
}
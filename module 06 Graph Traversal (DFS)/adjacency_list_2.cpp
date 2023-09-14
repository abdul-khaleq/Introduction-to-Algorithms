#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> adjacency_list[N];
int main(){
    int n, m;
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;
        adjacency_list[u].push_back(v);
        adjacency_list[v].push_back(u);
    }

    for (int i = 1; i <=n; i++)
    {
        cout<< "List "<<i<<": ";
        for(int j: adjacency_list[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
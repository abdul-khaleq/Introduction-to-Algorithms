#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<pair<int, int>> adjacency_list[N];
int main(){
    int n, m;
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int u, v, w;
        cin>>u>>v>>w;
        adjacency_list[u].push_back(make_pair(v, w));
        adjacency_list[v].push_back({u,w});
    }

    for (int i = 1; i <=n; i++)
    {
        cout<< "List "<<i<<": ";
        for(auto j: adjacency_list[i]){
            cout<<"("<<j.first<<", "<<j.second<<")";
        }
        cout<<endl;
    }
    
    return 0;
}
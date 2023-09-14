#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
vector<int> adjacency_list[N];
int adjacency_matrix[N][N];
int main(){
    int n, m;
    cin>>n>>m;
    for(int i=1; i<=m; i++){
        int u, v;
        cin>>u>>v;
        adjacency_list[u].push_back(v);
    }
    for(int i=1; i<=n; i++){
        for(auto j:adjacency_list[i]){
            adjacency_matrix[i][j] = 1;
        }
    }

for(int i=1; i<=n; i++){
    cout<<"List "<<i<<" : ";
        for(auto j:adjacency_list[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }
cout<<"---------"<<endl;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<adjacency_matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
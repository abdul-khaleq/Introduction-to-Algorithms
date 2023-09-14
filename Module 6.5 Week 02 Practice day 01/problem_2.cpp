#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
int adjacency_matrix[N][N];
vector<int> adjacency_list[N];
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            int x;
            cin>>x;
            adjacency_matrix[i][j] = x;
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(adjacency_matrix[i][j] != 0){
                adjacency_list[i].push_back(j);
            }
        }
    }


    for(int i=1; i<=n; i++){
        cout<<"List "<<i<<" : ";
        for(int j:adjacency_list[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
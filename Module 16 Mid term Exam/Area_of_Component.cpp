#include<bits/stdc++.h>
#define pi pair<int, int>
using namespace std;
int n,m;
const int N = 1005;
bool vis[N][N];
char a[N][N];
set<int> ss;
int cnt = 0;

vector<pi> path = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
bool isValid(int cI, int cJ){
    if(cI >= 0 && cI <n && cJ >=0 && cJ <m && a[cI][cJ] == '.') return true;
    else return false;
}

void dfs(int si, int sj){
    vis[si][sj] = true;
    cnt++;
    for(int i=0; i<4; i++){
        pi p = path[i];
        int ci=si+p.first;
        int cj = sj+p.second;
        if(isValid(ci, cj) && !vis[ci][cj]){
            dfs(ci, cj);
        }
    }
 }
int main(){
    cin>>n>>m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(!vis[i][j] && a[i][j] == '.'){
                dfs(i, j);
                ss.insert(cnt);
                cnt = 0;
            }
        }
    }
    if(!ss.empty()) cout<<*ss.begin()<<endl;
    else cout<<-1;
    return 0;
}
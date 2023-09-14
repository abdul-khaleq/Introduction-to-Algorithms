#include<bits/stdc++.h>
using namespace std;
int parent[100];
bool flag = false;
int find(int x){
    if(flag) cout<<"Calling node "<<x<<endl;
    if(x == parent[x]) return x;
    else{
        return find(parent[x]);
    }
}
void union_fun(int u, int v){
    int p = find(u);
    int q =find(v);
    if(p!=q){
        parent[q] = p;
    }
}
int main(){
    for(int i=1; i<=8; i++){
        parent[i] = i;
    }
    union_fun(7,8);
    union_fun(6,7);
    union_fun(5,6);
    union_fun(4,5);
    union_fun(3,4);
    union_fun(2,3);
    union_fun(1,2);

    flag = true;
    cout<<find(8)<<endl;
    cout<<"===============\n";
    cout<<find(8)<<endl;
    return 0;
}
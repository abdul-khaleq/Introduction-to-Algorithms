#include <bits/stdc++.h>
using namespace std;
int parent[8] = {-1, -1, 1, 1, 6, 4, -1, -1};
int find(int n){
    while(parent[n] != -1){
        n = parent[n];
    }
    return n;
}
int main()
{
    cout<<parent[0]<<endl;
cout<<find(5);
    return 0;
}

// 7 4
// 1 2
// 2 3
// 4 5
// 6 5
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> adjmat[N];
bool visited[N];
void dsf(int u)
{
    // section 1: actions just after entering node u
    visited[u] = true;
    cout << "Visiting node: " << u << endl;
    for (int v : adjmat[u])
    {
        // section 2: actions before entering a new neighbor
        if (visited[v] == true)
            continue;
        dsf(v);
        // section 3: actions after exiting a neighbor
    }
    // section 4: actions before exiting a node u
}
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adjmat[u].push_back(v);
        adjmat[v].push_back(u);
    }

    // for(int i=1; i<=n; i++){
    //     cout<<"Node "<<i<<": ";
    //     for(int j:adjmat[i]){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    dsf(1);
    cout << "Visiting Array\n";
    for (int i = 1; i <= n; i++)
    {
        cout << "Node " << i << " tatus: " << visited[i] << endl;
    }
    return 0;
}
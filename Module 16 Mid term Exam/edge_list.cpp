#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<pair<int, int>> v;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }

    for (int j = 0; j < v.size(); j++)
    {
       cout<<v[j].first<< " "<<v[j].second<<endl;
    }

    return 0;
}
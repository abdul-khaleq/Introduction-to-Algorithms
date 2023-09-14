#include <bits/stdc++.h>
using namespace std;
int cost[] = {10, 15, 20};
int minCost = 0;
int n = sizeof(cost) / sizeof(cost[0]);
int check(int minCost, int index)
{
    if (n == index)
        return minCost;
    int op1 = check(minCost + cost[index], index + 1);
    int op2 = check(minCost, index + 1);
    return min(op1, op2);
}
int main()
{
    cout << check(0, 1) << endl;
    return 0;
}
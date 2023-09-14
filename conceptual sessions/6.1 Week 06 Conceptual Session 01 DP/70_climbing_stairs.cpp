#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int solve(int n, vector<int> &move){
        if(n <= 2) return n;
        if(move[n] != -1) return move[n];
        return move[n] = solve(n-1, move) + solve(n-2, move);
    }
    int climbStairs(int n) {
        vector<int> move(50, -1);
        return solve(n, move);
    }
};
int main(){
    int n;
    cin>>n;
    Solution s;
    cout<<s.climbStairs(n);
    return 0;
}
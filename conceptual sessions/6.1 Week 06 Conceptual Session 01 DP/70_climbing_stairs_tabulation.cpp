#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int solve(int n, vector<int> &move){
        //base case
        if(n <= 2) return n;
        move[1] = 1;
        move[2] = 2;
        for(int i=3;i<=n; i++){
            move[i] = move[i-1] + move[i-2];
        }
        return move[n];
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
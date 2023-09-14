#include <bits/stdc++.h>
using namespace std;
int arr[21];
int n, x;
bool check_x(long long int sum, int i){
    if(i==n){
        // if(sum == x){
        //     return true;
        // }else{
        //     return false;
        // }
        return sum == x;
    }
    bool op1=check_x(sum+arr[i], i+1);
    bool op2=check_x(sum-arr[i], i+1);
    return op1 || op2;
    
}
int main()
{
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if(check_x(arr[0], 1)) cout<<"YES";
    else cout<<"NO";
    return 0;
}
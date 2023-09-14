#include <bits/stdc++.h>
using namespace std;
int findSecondLargest(int n, vector<int> &arr)
{
    // Write your code here.
    sort(arr.begin(), arr.end());
    for(int i=n-1; i>0; i--){
        if(arr[i] != arr[i-1]){
            return arr[i-1];
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {10, 10, 10, 10, 10};
    int n = arr.size();
    cout<<findSecondLargest(n, arr);

    for(int i=0; i<n; i++){
        // cout<<arr[i]<<" ";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
void merge_sort(int left, int right, vector<int> &numbers, int k, int &count){
    if(left == right) return;
    int mid = (left + right ) / 2;
    if(numbers[mid] == k){
        count++;
    }
    merge_sort(left, mid, numbers, k, count);
    merge_sort(mid+1, right, numbers, k, count);
}
int main(){
    vector<int> numbers;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        numbers.push_back(x);
    }
    int k;
    cin>>k;
    int left = 0;
    int right = numbers.size();
    int count = 0;
    merge_sort(left, right, numbers, k, count);
    if(count > 1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
void merge_numbers(int left, int right, int mid, vector<int> &numbers){
    int leftSize = mid - left + 1;
    int rightSize = right - mid;
    int lSide[leftSize + 1];
    int rSide[rightSize + 1];
    for(int i=left, j=0; i<=mid; i++, j++){
        lSide[j] = numbers[i];
    }
    for(int i=mid+1, j=0; i<=right; i++, j++){
        rSide[j] = numbers[i];
    }
    lSide[leftSize] = INT_MIN;
    rSide[rightSize] = INT_MIN;
    int lp = 0;
    int rp = 0;
    for(int i=left; i<=right; i++){
        if(lSide[lp] >= rSide[rp]){
            numbers[i] = lSide[lp];
            lp++;
        }else{
            numbers[i] = rSide[rp];
            rp++;
        }
    }

}
void merge_sort(int left, int right, vector<int> &numbers){
    if(left == right) return;
    int mid = (left + right ) / 2;
    merge_sort(left, mid, numbers);
    merge_sort(mid+1, right, numbers);
    merge_numbers(left, right, mid, numbers);
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
    int left = 0;
    int right = numbers.size() -1;
    merge_sort(left, right, numbers);
    for(int i=0; i<n; i++){
        cout<<numbers[i]<<" ";
    }

    return 0;
}
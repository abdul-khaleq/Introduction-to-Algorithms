#include<bits/stdc++.h>
using namespace std;
void merge(int l, int r, int mid, vector<int> &nums){
    int left_size = mid - l + 1;
    int L[left_size + 1];

    int right_size = r - mid;
    int R[right_size + 1];

    for(int i =l, j=0; i<=mid; i++, j++){
        L[j] = nums[i];
    }
    for(int i =mid+1, j=0; i<=r; i++, j++){
        R[j] = nums[i];
    }
    L[left_size] = INT_MIN;
    R[right_size] = INT_MIN;
    int lp=0, rp=0;
    for(int i=l; i<=r; i++){
        if(L[lp] >= R[rp]){
            nums[i] = L[lp];
            lp++;
        }else{
            nums[i] = R[rp];
            rp++;
        }
    }
}
void merge_sort(int l, int r, vector<int> &nums){
    if(l == r) return;
    int mid = (l + r) / 2;
    merge_sort(l, mid, nums);
    merge_sort(mid+1, r, nums);
    merge(l, r, mid, nums);
}

int main(){
    int n;
    cin>>n;
    vector<int> nums;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        nums.push_back(x);
        
    }
    
    merge_sort(0, n-1, nums);
    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
void merge(int l, int r ,int mid, vector<int> &unsortedNumbers){
    int left_size = mid - l +1;
    int right_size = r - mid;

    int L[left_size + 1];
    int R[right_size + 1];

    for(int i=l, j=0; i<=mid; i++, j++){
        L[j] = unsortedNumbers[i];
    }
    for(int i=mid+1, j=0; i<=r; i++, j++){
        R[j] = unsortedNumbers[i];
    }

    L[left_size] = INT_MAX;
    R[right_size] = INT_MAX;

    int lp=0;
    int rp=0;
    for(int i=l; i<=r; i++){
        if(L[lp] <= R[rp]){
            unsortedNumbers[i] = L[lp];
            lp++;
        }else{
            unsortedNumbers[i] = R[rp];
            rp++;
        }
    }
}
void merge_sort(int l, int r, vector<int> &unsortedNumbers){
    if(l==r) return;
    int mid = (l + r) / 2;
    merge_sort(l, mid, unsortedNumbers);
    merge_sort(mid+1, r, unsortedNumbers);
    merge(l, r, mid, unsortedNumbers);

}

int main(){
    vector<int> unsortedNumbers = {20, 50, 10, 40, 30};
    int sz = unsortedNumbers.size();
    int l = 0;
    int r = sz-1;
    merge_sort(l, r ,unsortedNumbers);
    for(int i=0; i<sz; i++){
        cout<<unsortedNumbers[i]<<" ";
    }
    return 0;
}
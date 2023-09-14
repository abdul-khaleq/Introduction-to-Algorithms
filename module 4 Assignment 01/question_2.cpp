#include<bits/stdc++.h>
using namespace std;
void binary_search(int n, int numbers[], int k){
        int l=0;
        int r=n-1;
        while (l<=r){
        int mid_index=(l+r)/2;
        if(numbers[mid_index]==k){
            cout<<mid_index<<endl;
            return;
        }
        if(k>numbers[mid_index]){
            l=mid_index+1;
        }else{
            r=mid_index-1;
        }
    }
    cout<<"Not Found"<<endl;
}
int main(){
    int n;
    cin>>n;
    int numbers[n];
    for(int i=0;i<n;i++){
        cin>>numbers[i];
    }
    int k;
    cin>>k;
    binary_search(n, numbers, k);
    return 0;
}
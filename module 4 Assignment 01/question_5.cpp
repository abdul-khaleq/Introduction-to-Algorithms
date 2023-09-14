#include<bits/stdc++.h>
using namespace std;
void mergeSortedArrays(int arr1[], int arr2[], int n, int m, int mergedArr[]){
    int i = 0, j = 0, k = 0;
    while(i < n && j < m){
        if(arr1[i] >= arr2[j]){
            mergedArr[k] = arr1[i];
            i++;
        }else{
            mergedArr[k] = arr2[j];
            j++;
        }
        k++;
    }
    while(i < n){
        mergedArr[k] = arr1[i];
        i++;
        k++;
    }
    while(j < m){
        mergedArr[k] = arr2[j];
        j++;
        k++;
    }
}
int main(){
    int n;
    cin>>n;
    int arr1[n];
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        arr1[i] = x;
    }
    int m;
    cin>>m;
    int arr2[m];
    for(int i=0; i<m; i++){
        int x;
        cin>>x;
        arr2[i] = x;
    }
    int newArr[n+m];
    mergeSortedArrays(arr1, arr2, n, m, newArr);
    for(int i=0; i<n+m; i++){
        cout<<newArr[i]<<" ";
    }
    return 0;
}
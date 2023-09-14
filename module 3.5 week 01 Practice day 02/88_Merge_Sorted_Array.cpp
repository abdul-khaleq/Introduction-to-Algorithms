#include<bits/stdc++.h>
using namespace std;
    void mergeTwoArray(vector<int>& nums1, int m, vector<int>& nums2, int n){
        int i=0;
        int j=0;
        int k=0;
        vector<int> v;
        while(i < m && j < n){
            if(nums1[i] <= nums2[j]){
                v.push_back(nums1[i]);
                i++;
            }else{
                v.push_back(nums2[j]);
                j++;
            }
        }
        while(i < m){
            v.push_back(nums1[i]);
            i++;
        }
        while(j < n){
            v.push_back(nums2[j]);
            j++;
        }
        nums1.clear();
        for(int val: v){
            nums1.push_back(val);
        }
    }
int main(){

    vector<int> nums1 = {1,2,3};
    vector<int> nums2 = {2,5,6};
    int m = nums1.size();
    int n = nums1.size();


    mergeTwoArray(nums1, m, nums2, n);

    for(int i=0; i<nums1.size(); i++){
        cout<<nums1[i]<<" ";
    }
    return 0;
}
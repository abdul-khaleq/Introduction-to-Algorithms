#include<bits/stdc++.h>
using namespace std;
vector<int> targetIndices(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
        vector<int> sortedNums;
        int sz = nums.size();
        for(int i=0; i<sz; i++){
            if(nums[i] == target){
                sortedNums.push_back(i);
            }
        }
        return sortedNums;
    }
int main(){
    vector<int> nums = {1,2,5,2,3};
    int target = 5;
    vector<int> v = targetIndices(nums, target);
    for(int val:v){
        cout<<val<<" ";
    }
    return 0;
}
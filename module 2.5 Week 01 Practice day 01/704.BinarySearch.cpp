#include<bits/stdc++.h>
using namespace std;
int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        int mid = (l + r) / 2;
        while(l < r){
            mid = (l + r) / 2;
            if(nums[mid] == target){
                return mid;
            }else if(nums[mid] > target){
                r = mid - 1;
            }else  if(nums[mid] < target){
                l = mid + 1;
            }
        }
        return -1;
    }
int main(){
    vector<int> nums = {-1,0,3,5,9,12};
    int target = 2;
    cout<<search(nums, target);

    return 0;
}
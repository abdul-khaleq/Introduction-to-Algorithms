#include<bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>& nums) {
    int sz = nums.size();
    int sumOfnums = 0;
    int sumOfN     = 0;
    for(int val : nums){
        sumOfnums = sumOfnums + val;
    }

    for(int i=0; i<=sz; i++){
        sumOfN = sumOfN + i;
    }
    
    return sumOfN -sumOfnums;
    }
int main(){
    vector<int> nums = {9,6,4,2,3,5,7,0,1};
    cout<<missingNumber(nums);

    return 0;
}
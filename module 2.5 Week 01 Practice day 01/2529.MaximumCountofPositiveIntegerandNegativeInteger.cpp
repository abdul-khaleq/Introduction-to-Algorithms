#include<bits/stdc++.h>
using namespace std;
int targetIndices(vector<int>& nums) {
        int pos = 0;
        int neg = 0;
        int sz = nums.size();
        for(int i=0; i<sz; i++){
            if(nums[i] < 0){
                neg++;
            }else if(nums[i] > 0){
                pos++;
            }
        }
        if(pos >= neg){
            return pos;
        }else{
            return neg;
        }
        
    }
int main(){
    vector<int> nums = {5,20,66,1314};
    cout<<targetIndices(nums);

    return 0;
}
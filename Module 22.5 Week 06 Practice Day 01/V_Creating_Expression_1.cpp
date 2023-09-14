#include<bits/stdc++.h>
using namespace std;
long long int n, x;
long long int arr[50];
bool check(long long sum,long long index){
	if(index == n){
		 return sum == x;
	}
	bool route1 = check(sum+arr[index],index+1);
	bool route2 = check(sum-arr[index],index+1);
	return route1 || route2;
}
int main(){
    cin>>n>>x;
 
    long long int sum = 0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    if(check(arr[0],1)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
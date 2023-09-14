//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int dp[1005][1005];
    
    int knapsack(int s, int w[], int v[], int n){
        if(n == 0 || s == 0) return 0;
        
        if(dp[n][s] != -1) return dp[n][s];
        
        if(w[n-1] <= s){
            return dp[n][s] = max(v[n-1] + knapsack(s-w[n-1], w, v, n-1), knapsack(s, w, v, n-1));
        }
        else{
            return dp[n][s] = knapsack(s, w, v, n-1);
        }
    }
    int knapSack(int s, int w[], int v[], int n) 
    { 
       // Your code here
       cout<<"Ok";
       for(int i=0; i<=n; i++){
           for(int j=0; j<=s; j++){
               dp[i][j] = -1;
           }
       }
       return knapSack(n, w, v, n);
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends
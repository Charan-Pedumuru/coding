#include<bits/stdc++.h>
using namespace std;


int main(){

	int n;
	cin>>n;  // O(1) 

	int arr[n];
	
	for(int i=0; i<n; i++) cin>>arr[i]; // O(n) 

    // dp[i] will store the maximum sub array sum ending at index i
	int dp[n];

    // for base case at first element we have only arr[0] as element so it is the maximum sum possible

	dp[0] = arr[0]; //O(1)

    // and for index i after 0 we can take a subarray sum from previous index and add this current element to get the sub array sum till this index or we can pick only this element as sub array..

	for(int i=1; i<n; i++) dp[i] = max(dp[i-1]+arr[i], arr[i]);//O(n) 
	
	int ans = -1e9;

    // maximum sum will end at any one of the index so we will loo throguh all index and chec for maximum sum ending that index. 

	for(int i=0; i<n; i++) ans  = max(ans, dp[i]); //O(n)
	
	cout<<ans<<endl;
}


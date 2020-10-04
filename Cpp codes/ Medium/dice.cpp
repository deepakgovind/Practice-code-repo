//Dynamic programming qn
//Given n dice each 6 faces, numbered from 1 to 6, find the number of ways to get sum x.
 //x is the summation of values on each face when all the dice are thrown. 
#include<bits/stdc++.h>
#define mod 1000000007;
using namespace std;

int main(){
	int n, i, x;
	cin>>n;
	vector<int> dp(n+1, 0);
	dp[0]=1;
	for(i=0; i<n+1; i++)
		for(x=1; x<=6 && i-x>=0; x++){
			if(x>i)
				break;
			else
				(dp[i]+= dp[i-x]) %= mod; 
		}
	cout<<dp[n];
}
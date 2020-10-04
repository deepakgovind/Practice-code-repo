//program to give gifts 
//n employees
// Rules to distribute the gifts are:
//Each employee must receive at least one gift. 
//Employees having higher ranking get a greater number of gifts than their neighbours.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, i, give=0, gifts=0;
    cin>>n;
    vector<int> r, dp(n, 1);
    for(i=0; i<n; i++){
        cin>>x;
        r.push_back(x);
    }
    for(i=0; i<n; i++){
		if(r[i+1]>r[i])
			dp[i+1]=dp[i]+1;
    }
    cout<<accumulate(dp.begin(), dp.end(), 0)<<"\n";
    for(i=0; i<n; i++)
    	cout<<dp[i]<<" ";
    return 0;
}
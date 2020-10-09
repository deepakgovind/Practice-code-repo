#include<bits/stdc++.h>
using namespace std;

 int maxProfit(vector<int>& prices)//Func to return max profit
 {
        int n=prices.size();
        if(n==0)
            return 0;
        vector<int> minm(n),maxm(n);
        minm[0]=prices[0];
        maxm[n-1]=prices[n-1];
        for(int i=1;i<n;i++)//Storing minimum till i from index 0
         minm[i]=min(minm[i-1],prices[i]);
        for(int i=n-2;i>=0;i--)//Storing maximum between i to n-1
            maxm[i]=max(maxm[i+1],prices[i]);
        int val=INT_MIN;
        for(int i=0;i<n;i++)
            val=max(val,maxm[i]-minm[i]);
        return val;
    }

int main()
{
    int n;
    cin>>n;
    vector<int> prices(n);//This is prices array
    for(int i=0;i<n;i++)
    {
        cin>>prices[i];
    }
    cout<<maxProfit(prices)<<endl;
}


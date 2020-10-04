//Minimum product of k integers in an array of positive Integers


#include <bits/stdc++.h>
using namespace std;

int minProduct(int arr[], int n, int k) 
{ 
    priority_queue<int, vector<int>, greater<int> > pq; 
    for (int i = 0; i < n; i++) 
        pq.push(arr[i]); 
  
    int c = 0, ans = 1; 
    
    while (pq.empty() == false && c < k) { 
        ans = ans*pq.top(); 
        pq.pop(); 
        c++; 
    } 
    return ans; 
} 

int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	    cin>>a[i];
	int k;
	cin>>k;
	cout<<minpro(a,n,k);
	return 0;
}

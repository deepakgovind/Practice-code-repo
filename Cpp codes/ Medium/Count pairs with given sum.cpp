//Count pairs with given sum


#include <iostream>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	    cin>>a[i];
	int sum;
	cin>>sum;
	
	int cnt=0;
	for(int i=0;i<n;i++)
	    for(int j=i+1;j<n;j++)
	        if(a[i]+a[j]==sum)
	            cnt++;
	cout<<"Number of such pairs: "<<cnt;
	
	return 0;
}

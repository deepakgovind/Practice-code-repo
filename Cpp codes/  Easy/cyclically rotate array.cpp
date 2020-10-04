//Cyclically rotate an array by one


#include <iostream>
using namespace std;

void cyrotate(int a[], int n)
{
    int temp = a[n-1], i; 
    for (i=n-1;i>0;i--) 
    a[i] = a[i-1];  
    a[0] = temp; 
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	    cin>>a[i];
	cyrotate(a,n);
	for(int i=0;i<n;i++)
	    cout<<a[i]<<" ";
	return 0;
}

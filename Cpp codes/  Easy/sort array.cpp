//Sort an array


#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int a[]={3,4,2,6,5}
	int n= sizeof(a)/sizeof(int);
	sort(a,a+n);
	for(int i=0;i<n;i++)
	    cout<<a[i]<<" ";
	return 0;
}

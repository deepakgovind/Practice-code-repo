#include<iostream>
using namespace std;
int main() {
	int n,r,sum=0,p=1;
	cin>>n;
	while(n>0)
	{
		r=n%10;
		sum=sum+r*p;
		p=p*2;
		n=n/10;
}
cout<<sum;
	return 0;
}

#include<iostream>
using namespace std;
int main() {
	int n,d,r,count=0;
	cin>>n>>d;
while(n>0)
	{
r=n%10;
if(r==d)
count++;
n=n/10;
}
cout<<count;
	return 0;
}

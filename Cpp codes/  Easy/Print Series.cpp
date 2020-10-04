#include<iostream>
using namespace std;
void pseries(int n1,int n2)
{

for(int i=1;i<=n1;i++)
{
	int val=0;
	val=(3*i)+2;
	if(val%n2==0)
	{
	n1=n1+1;
	}
	else
	{
		cout<<val<<endl;
	
	}
}
}
int main() {
	int n1,n2;
	cin>>n1>>n2;
	pseries(n1,n2);
	return 0;
}

#include<iostream>
using namespace std;

void printABCDpattern()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	char startValue ='A';
	int nofv=n-i;

for(int i=0;i<nofv;i++)
{
cout<<startValue;
startValue++;
	}
	cout<<endl;
	}
}




int main()
{
printABCDpattern();
return 0;	
}

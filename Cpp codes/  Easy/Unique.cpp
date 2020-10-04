#include<iostream>
using namespace std;
int main()
{ 
int n,N,unique=0;
cin>>n;

for(int i=0;i<n;i++)
{
	cin>>N;
	unique=unique^N;
}
cout<<unique<<endl;

	return 0;
}

#include<iostream>
using namespace std;
int main() 
{
	int N,dec=0,n,r,p=1;
	cin>>N;
   while(N>0)
	{
  cin>>n;
  dec=0;
  p=1;
  while(n>0)
{ 
    r=n%10;
	dec+=r*p;
	p=p*2;
	n=n/10;
	}
cout<<dec<<endl;
N--;
	}
	return 0;
}

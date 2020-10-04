#include<iostream>
using namespace std;
void findZeros(int n)
{
	int nzeros=0;
    for(int D=5;n/D>=1;D*=5)
    {
    	nzeros+=n/D;
  	}
  	
  	cout<<nzeros;
  }

int main()
{
	int n;
	cin>>n;
	findZeros(n);
	return 0;
}

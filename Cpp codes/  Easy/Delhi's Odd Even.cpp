#include<iostream>
using namespace std;
int main() {
	int n,N,r;
	cin>>n;
	while(n>0)
	{
		cin>>N;
		int oddsum=0,evensum=0;
		while(N>0)
		{
			
			r=N%10;
			if(r%2==0)
			{
				evensum+=r;
			}
			else
			{
				oddsum+=r;
			}
			N=N/10;
		}
		if(oddsum%3==0 or evensum%4==0)
		{
			cout<<"Yes";
        }
		else{
			cout<<"No";
		}
	n--;
	}
	return 0;
}

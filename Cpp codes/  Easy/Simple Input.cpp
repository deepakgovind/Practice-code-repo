#include<iostream>
using namespace std;
int main() {
	int n,sum=0;
	cin>>n;
   while(true)
	{
	sum=sum+n;
	if(sum<0)
	{
		break;
	}
	cout<<n<<endl;
	cin>>n;

	}
	return 0;
}

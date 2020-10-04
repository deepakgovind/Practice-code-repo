#include<iostream>
using namespace std;


int increment (int i)
{
	i++;
	cout<<i<<endl;
	return i;
}
int main()
{
int i=10;
i=increment(i);	
cout<<i;
return 0;
}

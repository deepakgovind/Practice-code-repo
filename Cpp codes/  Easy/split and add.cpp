//Split the given array and add the first half to the end.


#include <iostream>
using namespace std;

void splitarr(int a[],int n,int pos)
{
    for(int i=0;i<pos;i++)
    {
        int temp=a[0];
        for(int j=0;j<n-1;j++)
            a[j]=a[j+1];
        a[n-1]=temp;
    }
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	    cin>>a[i];
	int pos;
	cin>>pos;
	
	splitarr(a,n,pos);
	
	for(int i=0;i<n;i++)
	    cout<<a[i]<<" ";
	return 0;
}

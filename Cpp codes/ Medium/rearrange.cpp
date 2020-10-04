//Rearrange array in such that even positioned are greater than the odd ones


#include <iostream>
#include<algorithm>
using namespace std;

void rearrange(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(i%2==0)
        {
            if(a[i]>a[i-1])
                swap(a[i-1],a[i]);
        }
        else
        {
            if(a[i]<a[i-1])
                swap(a[i-1],a[i]);
        }
    }
}

int main() {
	
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	    cin>>a[i];
	rearrange(a,n);
	for(int i=0;i<n;i++)
	    cout<<a[i]<<" ";
	return 0;
}

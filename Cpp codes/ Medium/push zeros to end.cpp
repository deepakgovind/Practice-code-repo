//Move all zeroes to end of array


#include <iostream>
using namespace std;

void pushzeros(int a[],int n){
    int cnt=0;  //count of non-zero elements
    for(int i=0;i<n;i++)
        if(a[i]!=0)
            a[cnt++]=a[i];
    while(cnt<n)
        a[cnt++]=0;
            
}

int main() {
	
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	    cin>>a[i];
	pushzeros(a,n);
	for(int i=0;i<n;i++)
	    cout<<a[i]<<" ";
	
	return 0;
}

#include<iostream>
using namespace std;
void selsort(int[],int);
int main()
{
	int arr[10],n,i;
	cout<<"Selection Sort \n";
	cout<<"Enter the no of elements you want to enter : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter element "<<i+1<<" : ";
		cin>>arr[i];
	}
	selsort(arr,n);
	cout<<"The sorted array is : ";
	for(i=0;i<n;i++)
	{
		cout<<arr[i];
		cout<<endl;
	}
}

void selsort(int arr[],int size)
{
	int small,pos ,temp;
	for(int i=0;i<size-1;i++)
	{
		small=arr[i];
		pos=i;
		for(int j=i+1;j<size;j++)
		{
			if(arr[i]<small)
			{
				small=arr[j];
				pos=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[pos];
		arr[pos]=temp;
		cout<<"Array after every pass : "<<i+1<<" is : ";
		for(int j=0;j<size;j++)
		{
			cout<<arr[j]<<" ";
		}
	}
}

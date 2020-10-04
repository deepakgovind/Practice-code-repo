#include<iostream>
#include<time.h>
using namespace std;
void insertion(int,int[]);
int main()
{
	int n,arr[50];
	double time_taken;
	cout<<"Insertion sort \n";
	clock_t t;
    t=clock();
	cout<<"Enter how many elements you want to enter in the array : ";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Elements before sorting : ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	insertion(n,arr);
	cout<<endl<<"Elements after sorting : \n";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	t=clock()-t;
	time_taken=((double)t)/CLOCKS_PER_SEC;
	cout<<endl<<"It took "<<time_taken<<" seconds to execute";

	
}

void insertion(int size,int arr[]){

int temp,j;
int ctr=0;
for(int i=0;i<size;i++)
{
	temp=arr[i];
	j=i-1;
	while(temp<arr[j])
	{
		arr[j+1]=arr[j];
		j--;
	}
	cout<<endl<<"Array after iteration "<<++ctr<<" is : ";
	for(int k=0;k<size;k++)
	cout<<arr[k]<<" ";
	cout<<endl;
}
}




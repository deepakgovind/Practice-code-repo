#include<iostream>
#include<time.h>
using namespace std;
int main()
{
int arr[10],i,n,element;
double time_taken;
cout<<"Enter number of elements to be entered : ";
cin>>n;
clock_t t;
t=clock();
for(i=0;i<n;i++)
{
	cout<<"Enter element "<<i+1<<" ";
	cin>>arr[i];
}
cout<<"Elements are : ";
for(i=0;i<n;i++)
{
	cout<<arr[i]<<" ";
}
cout<<endl<<"Enter the number you want to search in the list : ";
cin>>element;
int low=0,high=n-1,mid;
mid=(low+high)/2;
while(low<=high)
{

if(arr[mid]<element)
   {
	low=mid+1;
	}	
	else if(arr[mid]==element)
	{
		cout<<"Number found at "<<mid+1;
		break;
	}
	else
	{
	high=mid-1;
    } 
    mid=(low+high)/2;
}
if(low>high)
{
	cout<<"Element not found";
}
t=clock()-t;
	 time_taken=((double)t)/CLOCKS_PER_SEC;
	 cout<<endl<<"It took "<<time_taken<<" seconds to execute";
return 0;
}



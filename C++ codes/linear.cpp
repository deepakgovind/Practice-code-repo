#include<iostream>
#include<time.h>
using namespace std;
int main()
{
     int arr[10],n,i,element,flag=0,pos=0;
     double time_taken;
     cout<<"Enter number of elements you want to enter in the array : ";
     cin>>n;
     clock_t t;
     t=clock();
     for(i=0;i<n;i++)
     {
     	cout<<"Enter "<<i+1<<" element : ";
     	cin>>arr[i];
	 }
	 cout<<"List is : ";
	  for(i=0;i<n;i++)
     {
     	cout<<endl<<arr[i]<<" ";
	 }
	 cout<<endl<<"Enter element you want to search in the list : ";
	 cin>>element;
	 
	 for(i=0;i<n;i++)
	 {
	 	if(arr[i]==element)
	 	{
	 		flag=1;
	 		pos=i+1;
		 }
		 
	 }
	 if(flag==1)
	 {
	 	cout<<"Element found at position "<<pos;
	 }
	 
	 else
	 {
	 	cout<<"Element not found ";
	 }
	 t=clock()-t;
	 time_taken=((double)t)/CLOCKS_PER_SEC;
	 cout<<endl<<"It took "<<time_taken<<" seconds to execute";
}

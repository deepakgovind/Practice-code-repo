//24.12.19

#include<iostream>

#include<fstream>

#include<ctime>

#include<cstdlib>

#include<stdio.h>

int count=0;

using namespace std;

void disp(int arr[],int n)

{

int i;
for(i=0;i<n;i++)

cout<<arr[i]<<' ';

cout<<endl;

}


void insertionSort(int arr[],int n)

{

int i,j,key;

for(i=1;i<n;i++)

{

key=arr[i];

j=i-1;

count++;

while(j>=0&&key<arr[j])

{

count++;


arr[j+1]=arr[j];

j--;

}

arr[j+1]=key;

}

}


int main()

{

int n,i;

cout<<"Enter the number of elements : ";

cin>>n;

int arr[n];

ofstream os;

cout<<"Random Case : "<<endl;

os.open("randominput.txt");

srand(time(0));

for(i=0;i<n;i++)

os<<rand()%100<<' ';
os.close();

ifstream ins;

ins.open("randominput.txt");

for(i=0;i<n;i++)

{

ins>>arr[i];

}

ins.close();

clock_t start,end;

double etime;

start=clock();

cout<<"Array before sorting : ";

disp(arr,n);

insertionSort(arr,n);

end=clock();

cout<<"Array after sorting : ";

disp(arr,n);

etime=(double)(end-start)/CLOCKS_PER_SEC;

cout<<"The time for random input sort : "<<etime<<endl;

cout<<"Number of times sorting was excecuted : "<<count<<endl;

return 0;

}



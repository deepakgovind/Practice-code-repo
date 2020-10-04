#include<bits/stdc++.h>

#include<fstream>

using namespace std;

int c=0;

void disp(int arr[],int n)

{
int i;

for(i=1;i<=n;i++)

cout<<arr[i]<<' ';

cout<<endl;

}

int partition(int arr[],int start,int end)

{

int pivot=arr[end],i,pIndex;

pIndex=start;

for(i=start;i<end;i++)

{

    if(arr[i]<pivot)

    {
  
      swap(arr[i],arr[pIndex]);

      pIndex++;

    }

}

swap(arr[pIndex],arr[end]);

return pIndex;

}

void quickSort(int arr[],int start,int end)

{

    int pIndex;

    if(start<end)

    {
  
     pIndex=partition(arr,start,end);

     quickSort(arr,start,pIndex-1);

     quickSort(arr,pIndex+1,end);
 
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

for(i=1;i<=n;i++)

os<<rand()%100<<' ';

os.close();

ifstream ins;

ins.open("randominput.txt");

for(i=1;i<=n;i++)

{

ins>>arr[i];

}

ins.close();

clock_t start,end;

double etime;

start=clock();

cout<<"Array before sorting : ";

disp(arr,n);

quickSort(arr,1,n);

end=clock();

cout<<"Array after sorting : ";

disp(arr,n);

etime=(double)(end-start)/CLOCKS_PER_SEC;

cout<<"The time for random input sort : "<<etime<<endl;

cout<<"Number of times sorting was excecuted : "<<c<<endl;

return 0;

}
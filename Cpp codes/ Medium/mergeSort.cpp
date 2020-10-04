//24.12.19
#include<iostream>
#include<fstream>
#include<time.h>
#include<cstdlib>
int count=0;
using namespace std;
void disp(int arr[],int n)
{
int i;
for(i=1;i<=n;i++)
cout<<arr[i]<<' ';
cout<<endl;
}
void Merge(int A[],int p,int q,int r)
{
int n1,n2,k,i,j;

n1=q-p+1;
n2=r-q;
int L[n1+1],R[n2+1];
for(i=1;i<=n1;i++)
L[i]=A[p+i-1];
for(j=1;j<=n2;j++)
R[j]=A[q+j];
L[n1+1]=10000;
R[n2+1]=10000;
i=1;
j=1;
k=p;

while(i<=n1&&j<=n2)
{
if(L[i]<=R[j])
{
A[k]=L[i];
i++;
}
else
{
A[k]=R[j];
j++;
}
k++;
}
//left over elements
   while(i<=n1)
   {
   A[k]=L[i];
   i++;
   k++;
   }
    
while(j<=n2)
    {
     A[k]=R[j];
     j++;
     k++;
     }
}
void mergeSort(int arr[],int p,int r)
{
if(p<r)
{
int q=(p+r)/2;
mergeSort(arr,p,q);
mergeSort(arr,q+1,r);
Merge(arr,p,q,r);
}
}
int main()
{
int n,i;
cout<<"Enter the number of elements : ";
cin>>n;
int arr[n];
ofstream os;
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
mergeSort(arr,1,n);
end=clock();
cout<<"Array after sorting : ";
disp(arr,n);
etime=(double)(end-start)/CLOCKS_PER_SEC;
cout<<"The time for random input sort : "<<etime<<endl;
cout<<"Number of times sorting was excecuted : "<<count;
return 0;
}
#include<iostream>
#include<fstream>
#include<time.h>
#include<cstdlib>
using namespace std;
int count=0;
void disp(int arr[],int n)
{
int i;
for(i=1;i<=n;i++)
cout<<arr[i]<<' ';
cout<<endl;
}
int max(int a[],int n)
{
int i,maxi;
maxi=a[1];
for(i=1;i<=n;i++)
{
if(a[i]>maxi)
maxi=a[i];
}
return maxi;
}
void countingSort(int a[],int b[],int length,int k)
{
int c[k+1],i,j;


for(i=0;i<=k;i++)
c[i]=0;
for(j=1;j<=length;j++)
{
c[a[j]]=c[a[j]]+1;
count++;
}

//c[i] contains number of elements equal to i
for(i=1;i<=k;i++)
{
c[i]=c[i]+c[i-1];
count++;
}

//c[i]now contains the number of elements less than or equal to i
for(j=length;j>=1;j--)
{
count++;
b[c[a[j]]]=a[j];

c[a[j]]=c[a[j]]-1;
}
}

int main()
{
int n,i;
cout<<"Enter the number of elements : ";
cin>>n;
int arr[n+1],output[n+1];
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
int k=max(arr,n);

clock_t start,end;
double etime;
start=clock();
cout<<"Array before sorting : ";
disp(arr,n);
countingSort(arr,output,n,k);

end=clock();
cout<<"Array after sorting : ";
disp(output,n);
etime=(double)(end-start)/CLOCKS_PER_SEC;
cout<<"The time for random input sort : "<<etime<<endl;
cout<<"Number of times sorting was excecuted : "<<count<<endl;
return 0;
}

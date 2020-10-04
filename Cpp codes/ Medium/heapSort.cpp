using namespace std;
#include<iostream>
#include<fstream>
#include<ctime>
#include<cstdlib>
static int c;
int parent(int i)
{
 return (i-1)/2;
}
int left(int i)
{
 return (2*i)+1;
}
int right(int i)
{
 return (2*i)+2;
}
void max_heapify(int a[],int i,int hs)
{
 int l,r,large,t;
 l=left(i);
 r=right(i);
 c++;
 if(l<=hs&&a[l]>a[i])
  large=l;
 else
  large=i;
 if(r<=hs&&a[r]>a[large])
  large=r;
 if(large!=i)
 {
  t=a[i];
  a[i]=a[large];
  a[large]=t;
  max_heapify(a,large,hs);
 }
}
void build_max_heap(int a[],int n)
{
 for(int i=(n-2)/2;i>=0;i--)
  max_heapify(a,i,n-1);
}
void heap_sort(int a[],int n)
{
 int t,hs=n-1;
 build_max_heap(a,n);
 c=0;
 for(int i=n-1;i>0;i--)
 {
  t=a[0];
  a[0]=a[i];
  a[i]=t;
  hs-=1;
  max_heapify(a,0,hs);
 }
}
void GenRand(int n)
{
 int i=0,r;
 ofstream fout("input.txt");
 srand((int)time(0));
 if(fout.is_open())
 {
  while(i++<n)
  {
   r=rand()%100;
   fout<<r<<" ";
  }
 }
 fout.close();
}
void ReadRandomFile(int a[],int n)
{
 ifstream fin("input.txt");
 int i=0;
 if(fin.is_open())
 {
  while(fin>>a[i++]);
 }
 fin.close();
} 
void ReadSortedFile(int a[],int n)
{
 ifstream fin("output.txt");
 int i=0;
 if(fin.is_open())
 {
  while(fin>>a[i++]);
 }
 fin.close();
}
void ReadReverseFile(int a[],int n)
{
 ifstream fin("output.txt");
 int i=n-1;
 if(fin.is_open())
 {
  while(fin>>a[i--]);
 }
 fin.close();
}
void WriteOutputFile(int a[],int n)
{
 ofstream fout("output.txt");
 int i;
 if(fout.is_open())
 {
  for(i=0;i<n;i++)
   fout<<a[i]<<" ";
 }
}
int main()
{
 int i,n;
 clock_t s1,s2;
 cout<<"Enter the no. of numbers to be generated:";
    cin>>n;
 int a[n];
 GenRand(n);
 ReadRandomFile(a,n);
 
 s1=clock();
 heap_sort(a,n);
 s2=clock();
 WriteOutputFile(a,n);
 
 cout<<"\n Random:";
 cout<<"\n Count is "<<c;
 cout<<"\n Time is "<<(double)(s2-s1)/CLOCKS_PER_SEC;
 
 ReadSortedFile(a,n);
 s1=clock();
 heap_sort(a,n);
 
 s2=clock();
 WriteOutputFile(a,n);
 cout<<"\n Sorted:";
 cout<<"\n Count is "<<c;
 cout<<"\n Time is "<<(double)(s2-s1)/CLOCKS_PER_SEC;
 
 ReadReverseFile(a,n);
 s1=clock();
 heap_sort(a,n);
 s2=clock();
 WriteOutputFile(a,n);
 cout<<"\n Reverse:";
 cout<<"\n Count is "<<c;
 cout<<"\n Time is "<<(double)(s2-s1)/CLOCKS_PER_SEC;
 return 0;
}
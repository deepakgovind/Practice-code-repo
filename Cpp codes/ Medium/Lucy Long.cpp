#include <iostream>
using namespace std;
int main() 
{
	int n;
     cin>>n;
  int arr[n];
 
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
 for(int i=0;i<n;i++)
    {
      int N;
      N=arr[i];
        int count;
        count=0;
        while(N>0)
        {
          int r;
         r=N%10;
          N=N/10;
          if(r==4 || r==7)
          {
           count=count;
          }
           else
           {
             count+=1;
           }
        }
      
     cout<<count<<" ";
    }
  
  return 0;
}

//a must do recursive problem
//cses grid path
#include<iostream>
using namespace std;
long long int c=0;
unsigned int M = 1000000007;
void traverse(char a[][10000],long long int i,long long int j,long long int n)
    {
        i=i%M;
        j=j%M;
        if(i==n-1&&j==n-1)
           {
                c++;
                c=c%M;
           }
        if(a[i][j]=='.')
        {
            if(a[i][j+1]=='.')
                traverse(a,i,j+1,n);
            if(a[i+1][j]=='.')
                traverse(a,i+1,j,n);
        }
    }
int main()
{
    
  long long int i,j,n;
  cin>>n;

  char a[n][10000];
  for(i=0; i<n;i++)
    {
      for(j=0;j<n;j++)
        cin>>a[i][j];
    }
      if(n==1)
        {
        if(a[0][0]=='*')
            {
                cout<<0;
                return 0;
            }
            else
            {
             cout<<1;
             return 0;
            }
        }

    i=0;
    j=0;
    traverse(a,0,0,n);
    cout<<c%M;
}
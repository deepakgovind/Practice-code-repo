#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int min_so_far=INT_MAX;
    int max_so_far=INT_MIN;
    int N;

    for(int i=0;i<n;i++)
    {
       cin>>N;
       if(N<min_so_far)
       {
       min_so_far=N;
       }
       if(N>max_so_far)
       {
           max_so_far=N;
       }

    }
    cout<<"Max"<<max_so_far;
    cout<<"Min"<<min_so_far;

    return 0;

}


//cses ferris wheel qn
//rattu is ferris wheel
#include<bits/stdc++.h> 
using namespace std;
int main()
{
    int n,i,x,max,count=0;
        cin>>n>>max;
    bool flag=true;
    vector<int> a;
    for(i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    for(i=n-1;i>=0 && flag;i--)
        {
           
            if(a[i]+a[i-1]>max)
                count ++;
            
            else
                {
                count++;
                i--;
                }
        }
    cout<<count;
}
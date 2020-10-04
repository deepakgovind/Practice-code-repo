#include <iostream>
#include<vector>
using namespace std;
int main() {
vector<int> arr;
  
  int n=3,N;
  float score=0;
  while (n>0)
  {
    cin>>N;
    arr.push_back(N);
    n=n-1;
  }
  
  
  int i=0;
  n=3;
   while (n>0)
  {
   if(arr.at(i)>=0 && arr.at(i)%2==0)
   {
     score=score+1;
   }
     else if(arr.at(i)>=0 && arr.at(i)%2!=0)
             {
               score=score-0.5;
             }
             
    else if(arr.at(i)<0)
            {
              
              score=score-1;
              break;
            }
             n=n-1;
             i=i+1;
             }
  cout<<score;
	return 0;
}

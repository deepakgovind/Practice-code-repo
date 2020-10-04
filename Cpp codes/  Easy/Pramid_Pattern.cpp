#include<iostream>
 using namespace std;
 
 int main()
 {
 	int n;
 	cin>>n;
 	 for (int i=1;i<=n;i++)
 	 {
 	 	
 	 	for(int space=1;space<=n-i;space++)
 	 	{
 	 		cout<<" ";
		  }
		  
		int val=i;
		for(int count=1;count<=i;count++)
{
	cout<<val;
	val+=1;
	
		}	
		
		val=val-2;
		for(int count=1;count<=i-1;count++)	
		{
			cout<<val;
		val-=1;	
		}
		 cout<<"\n";
		
		  
	  }
	  return 0;
 	
 }

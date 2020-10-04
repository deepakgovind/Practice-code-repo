#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	
	int x=0,y=0;
	char ch;
	float shortest_path;
	ch=cin.get();
	
	while(ch!='\n')
	{
		if(ch=='N' or ch=='n')
		{
			y++;
	}
	else if(ch=='E' or ch=='e')
	{
		x++;
	}
	else if(ch=='S' or ch=='s')
	{
		y--;
	}
	else if(ch=='W'or ch=='w')
	{
		x--;
	}
	ch=cin.get();
	}
	
	cout <<"Final Coordinates: ("<<x<<","<<y<<")"<<endl;
	int diagonal_length=sqrt((x*x+y*y));
	cout<<diagonal_length<<endl;
	cout<<"-------Shortest Path-------"<<endl;
	if(x){
	if(x>0)
	{
		while(x>0)
		{
			cout<<"E";
			x--;
		}
	}
	if(x<0)
	{
		while(x<0)
		{
			cout<<"W";
			x++;
		}	
	}
	}
	if(y){
			if(y>0)
	{
		while(y>0)
		{
			cout<<"N";
			y--;
		}
	}
	if(y<0)
	{
		while(y<0)
		{
			cout<<"S";
			y++;
		}	
	}
		
	}
	
	return 0;

}

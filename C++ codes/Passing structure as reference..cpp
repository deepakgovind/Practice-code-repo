#include<iostream>
#include<cstdio> //Header file for using c in cpp
using namespace std;
struct Rectangle
{
	int l;
	int b;
};
void change_length(struct Rectangle&);
int main()
{
struct Rectangle r ={4,5};
printf("Before %d \n",r.l);
change_length(r);//here the function code is copied instead of calling it.
printf("after %d",r.l);
return 0;
}
void change_length(struct Rectangle &r1)//passing structure by Reference(Only in CPP);
{
	r1.l=10;
}

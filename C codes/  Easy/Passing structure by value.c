#include<stdio.h>
struct Rectangle
{
	int l;
	int b;
};
int area(struct Rectangle);
int main()
{
struct Rectangle r ={4,5};
int area1;
area1=area(r);
printf("%d",area1);
return 0;
}

int area(struct Rectangle r1)//passing structure by value.
{
	return r1.l*r1.b;
}

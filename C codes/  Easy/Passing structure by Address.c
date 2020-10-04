#include<stdio.h>
struct Rectangle
{
	int l;
	int b;
};
int area(struct Rectangle*);
int main()
{
struct Rectangle r ={4,5};
printf("Before %d \n",r.l);
change_length(&r);
printf("after %d",r.l);
return 0;
}
void change_length(struct Rectangle *r1)//passing structure by address.
{
	r1->l=10; //or (*r1).l=10;
}
